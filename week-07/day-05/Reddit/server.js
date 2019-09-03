'use strict';

const express = require('express');
const app = express();
const PORT = 3000;
const mysql = require('mysql');
const connection = mysql.createConnection({
  host: 'localhost',
  user: 'root',
  password: 'password',
  database: 'reddit'
});

app.use(express.static('public'))
app.use(express.json()); //enable to parse req.body !

connection.connect(function (err) {
  if (err) {
    console.log('Error connecting to Db');
    return;
  }
  console.log('Connection established');
});

app.get('/', (req, res) => {
  res.sendFile('index.html');
});

app.get('/posts', (req, res) => {
  connection.query('SELECT * FROM posts;', (err, rows) => {
    res.send({ posts: rows });
  });
});

app.post('/posts', (req, res) => {
  const query = 'INSERT INTO posts(title, url) VALUES(?, ?);';
  const queryLastItem = 'SELECT * FROM posts WHERE id = ?';
  connection.query(query, [req.body.title, req.body.url], (err, result) => {
    if (err === null) {
      connection.query(queryLastItem, result.insertId, (err, result) => {
        res.status(200).send({
          id: result[0].id,
          title: result[0].title,
          url: result[0].url,
          timestamp: result[0].timestamp,
          score: result[0].score
        });
      });
    } else {
      res.sendStatus(500);
    }
  });
});

app.put('/posts/:id/upvote', (req, res) => {
  // req.params.id
  // query: UPDATE posts SET score = score + 1 WHERE id = 1;
  const query = `UPDATE posts SET score = score + 1 WHERE id = ${req.params.id};`
  re.send('PUT ok.');
});


app.listen(PORT, () => { console.log(`Server is up and listening on Port ${PORT} 👽`); })