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

connection.connect(function (err) {
  if (err) {
    console.log('Error connecting to Db');
    return;
  }
  console.log('Connection established');
});

// app.get('/', (req, res) => {
//   res.sendFile(__dirname + '/index.html');
// });

app.get('/posts', (req, res) => {
  connection.query('SELECT title, url FROM posts;', (err, rows) => {
    res.send({ posts: rows });
  });
});

// app.post('/posts', (req, res) => {
// });

const PORT = 3000;
app.listen(PORT, () => { console.log(`Server is up and listening on port ${PORT}`); })