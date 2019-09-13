const express = require('express');
const app = express();
// const fetch = require('node-fetch');
const mysql = require('mysql');
const connection = mysql.createConnection({
  host: 'localhost',
  user: 'root',
  password: 'password',
  database: 'alias'
});

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

app.post('/api/links', (req, res) => {
  const { url, alias } = req.body;
  let secret = Math.floor(1000 + Math.random() * 9000);
  console.log(secret, req.body);
  const query = `INSERT INTO aliases(url, alias, hitCount, secretCode) VALUES(?, ?, ?, ?)`;
  const queryLastItem = `SELECT * FROM aliases WHERE id = ?`;
  connection.query(query, [url, alias, 0, secret], (err, rows) => {
    if (err) {
      console.log(err)
      res.status(400).send({ error: 'Duplicate entry: alias should be unique.' });
    } else {
      console.log(rows);
      connection.query(queryLastItem, rows.insertId, (err, result) => {
        if (err) {
          console.log(err);
        } else {
          res.status(201).send(
            {
              id: result[0].id,
              url: result[0].url,
              alias: result[0].alias,
              hitCount: result[0].hitCount,
              secretCode: result[0].secretCode
            }
          );
        }
      });
    }
  });
}),

  module.exports = app;