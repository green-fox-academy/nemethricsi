const express = require('express');
const app = express();
// const fetch = require('node-fetch');
const mysql = require('mysql');
const connection = mysql.createConnection({
  host: 'localhost',
  user: 'root',
  password: 'password',
  database: 'auction'
});

app.set('view engine', 'ejs');
app.use(express.static('./assets'));
app.use(express.json()); //enable to parse req.body !

connection.connect(function (err) {
  if (err) {
    console.log('Error connecting to DB');
    return;
  }
  console.log('Connection established with DB');
});

app.get('/', (req, res) => {
  res.sendFile(__dirname + '/index.html');
});

app.get('/a/:alias', (req, res) => {
  //something
  const alias = req.params.alias;
});

module.exports = app;