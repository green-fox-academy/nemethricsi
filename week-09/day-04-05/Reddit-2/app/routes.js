const express = require('express');
const app = express();
const mysql = require('mysql');
const connection = mysql.createConnection({
    host: 'localhost',
    user: 'root',
    password: 'password',
    database: 'reddit'
});

app.get('/', (req, res) => {
    // implement your METHOD here
    res.send('okk');
});

module.exports = app;
