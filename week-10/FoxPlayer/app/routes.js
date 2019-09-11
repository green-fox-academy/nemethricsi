const express = require('express');
const app = express();
const fetch = require('node-fetch');
const mysql = require('mysql');
const connection = mysql.createConnection({
  host: 'localhost',
  user: 'root',
  password: 'password',
  database: 'foxplayer'
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
  let playlistPromise = new Promise((resolve, reject) => {
    connection.query(`SELECT * FROM playlists WHERE playlist_id != 1;`, (err, rows) => {
      if (err) {
        console.log('Sum Ting Wong');
      } else {
        resolve(rows);
      }
    });
  });
  let allTracksPromise = new Promise((resolve, reject) => {
    connection.query(`SELECT * FROM tracks;`, (err, rows) => {
      if (err) {
        console.log('Sum Ting Wong');
      } else {
        resolve(rows);
      }
    });
  });
  Promise.all([playlistPromise, allTracksPromise])
    .then(resp => res.render('index', { data: resp }));
});

app.get('/playlists', (req, res) => {
  connection.query('SELECT * FROM playlists;', (err, rows) => {
    if (err) {
      console.log(err);
    } else {
      res.send(rows);
    }
  });
});

app.post('/playlists', (req, res) => {
  const query = `INSERT INTO playlists VALUES(NULL, ?, 0);`;
  const queryLastItem = `SELECT * FROM playlists WHERE playlist_id = ?`;
  connection.query(query, req.body.newPlaylist, (err, result) => {
    if (err) {
      console.log(err)
      res.status(400).send({ error: 'Playlist name should be unique.' })
    } else {
      connection.query(queryLastItem, result.insertId, (err, result) => {
        if (err) {
          console.log(err)
        } else {
          res.status(201).send({
            created: 'playlist created',
            playlist_id: result[0].playlist_id,
            playlist: result[0].playlist,
            systems: result[0].systems
          });
        }
      });
    }
  });
});

app.delete('/playlists', (req, res) => {
  connection.query(`DELETE FROM playlists WHERE playlist = ?`, req.body.playlist, (err, result) => {
    if (err) {
      console.log(err);
    } else {
      res.sendStatus(204);
    }
  });
});

app.get('/playlist-tracks', (req, res) => {
  connection.query('SELECT * FROM tracks;', (err, rows) => {
    res.send(rows);
  });
});

app.get('/api/tracks', (req, res) => {
  fetch('http://localhost:3000/playlist-tracks')
    .then(answer => answer.json())
    .then(json => res.render('tracks', { tracks: json }));
});

app.get('/playlist-tracks/:playlist_id', (req, res) => {
  connection.query(`SELECT * FROM tracks WHERE playlist_id = ?`, req.params.playlist_id, (err, rows) => {
    res.render('tracks', { tracks: rows });
  });
});

app.get('/custom-playlists', (req, res) => {
  connection.query(`SELECT * FROM playlists WHERE playlist_id != 1;`, (err, rows) => {
    res.send(rows);
  });
});

module.exports = app;