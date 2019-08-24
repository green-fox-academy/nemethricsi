'use strict';

const express = require('express');
const app = express();
const mysql = require('mysql');
const connection = mysql.createConnection({
  host: 'localhost',
  user: 'root',
  password: 'password',
  database: 'reddit'
});

app.use(express.static('public'))

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
  connection.query('SELECT *, url FROM posts;', (err, rows) => {
    res.send({ posts: rows });
  });
});

app.post('/posts', (req, res) => {
  const query = 'INSERT INTO posts(title, url) VALUES(?, ?);';
  connection.query(query, [req.body.title, req.body.url], (err, result) => {
    if (err === null) {
      res.sendStatus(201);
    } else {
      res.sendStatus(500);
    }
  });
});

app.post('/account', (req, res) => {
  const { result } = req.body;
  const query = `insert into users(username,password) values(?, ?);`;
  console.log(req.body);
  connection.query(query, [req.body.username, req.body.password], (err, result) => {
    if (err === null) {
      res.sendStatus(201);
    }
    else {
      console.log(err);
      res.sendStatus(500);
    }
  });
});

const PORT = 3000;
app.listen(PORT, () => { console.log(`Server is up and listening on port ${PORT}`); })