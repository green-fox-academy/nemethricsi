const express = require('express');
const app = express();

app.set('view engine', 'ejs');
app.use(express.static('./assets'));
// app.use(express.json()); //enable to parse req.body !

app.get('/', (req, res) => {
  res.render('index');
});

app.get('/playlists', (req, res) => {
  // lists all the playlists
});

app.get('/playlist-tracks', (req, res) => {
  //  it should return all tracks in the root folder
  // Subfolders should be explored recursively.
});

module.exports = app;