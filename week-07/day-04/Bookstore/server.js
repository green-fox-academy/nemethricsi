'use strict';
const mysql = require('mysql');
const express = require('express');
const app = express();
const PORT = 3000;

const connection = mysql.createConnection({
  host: 'localhost',
  user: 'root',
  password: 'password',
  database: 'bookstore'
});

app.get('/books', (req, res) => {
  let selectAllBooks = 'SELECT book_name FROM book_mast';
  connection.query(selectAllBooks, (err, rows) => {
    res.send(rows);
  });
});

app.get('/booksHTML', (req, res) => {
  connection.query('SELECT book_name FROM book_mast', (err, rows) => {
    res.sendFile(__dirname + '/index.html');
  });
});

app.listen(PORT, () => {
  console.log(`Server is up and running on port ${PORT}`);
});
