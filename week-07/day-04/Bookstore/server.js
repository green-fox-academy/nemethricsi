'use strict';
const mysql = require('mysql');
const express = require('express');
const app = express();
const PORT = 3000;
app.use(express.static('assets'));

const connection = mysql.createConnection({
  host: 'localhost',
  user: 'root',
  password: 'password',
  database: 'bookstore'
});

connection.connect(function(err) {
  if (err) {
    console.log('Error connecting to Db');
    return;
  }
  console.log('Connection established');
});

//API on server side
app.get('/books', (req, res) => {
  let selectAllBooks = 'SELECT book_name FROM book_mast';
  connection.query(selectAllBooks, (err, rows) => {
    res.send(rows);
  });
});

app.get('/booksAllData', (req, res) => {
  let booksAllData =
    'SELECT book_mast.book_name, author.aut_name, category.cate_descrip, publisher.pub_name, book_mast.book_price FROM book_mast, author, category, publisher WHERE book_mast.aut_id = author.aut_id AND book_mast.cate_id = category.cate_id AND publisher.pub_id = book_mast.pub_id;';
  connection.query(booksAllData, (err, rows) => {
    console.log(rows);
    console.log(err);
    res.send(rows);
  });
});

app.get('/', (req, res) => {
  res.sendFile(__dirname + '/index.html');
});

app.listen(PORT, () => {
  console.log(`Server is up and running on port ${PORT}`);
});
