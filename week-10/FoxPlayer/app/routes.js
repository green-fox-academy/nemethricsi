const express = require('express');
const app = express();
const mysql = require('mysql');
const connection = mysql.createConnection({
  host: 'localhost',
  user: 'root',
  password: 'password',
  database: 'foxplayer'
});

app.set('view engine', 'ejs');
app.use(express.static('./assets'));
// app.use(express.json()); //enable to parse req.body !

connection.connect(function (err) {
  if (err) {
    console.log('Error connecting to DB');
    return;
  }
  console.log('Connection established with DB');
});

app.get('/', (req, res) => {
  res.render('index');
});

app.get('/playlists', (req, res) => {
  connection.query('SELECT * FROM playlists;', (err, rows) => {
    res.send(rows);
  });
});

app.get('/playlist-tracks', (req, res) => {
  connection.query('SELECT * FROM tracks;', (err, rows) => {
    res.send(rows);
  });
});

app.get('/playlist-tracks/:playlist_id', (req, res) => {
  connection.query(`SELECT * FROM tracks WHERE playlist_id = ${req.params.playlist_id};`, (err, rows) => {
    res.send(rows);
  });
});

app.get('/custom-playlists', (req, res) => {
  connection.query(`SELECT * FROM playlists WHERE playlist_id != 1;`, (err, rows) => {
    res.send(rows);
  });
});

module.exports = app;