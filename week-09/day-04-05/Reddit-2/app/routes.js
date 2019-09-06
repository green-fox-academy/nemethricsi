const express = require('express');
const app = express();
const mysql = require('mysql');
const connection = mysql.createConnection({
    host: 'localhost',
    user: 'root',
    password: 'password',
    database: 'reddit'
});

app.set('view engine', 'ejs');
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
    // implement your METHOD here
    res.render('index');
});

app.get('/posts', (req, res) => {
    connection.query('SELECT * FROM posts;', (err, rows) => {
        res.send({ posts: rows });
    });
});

module.exports = app;
