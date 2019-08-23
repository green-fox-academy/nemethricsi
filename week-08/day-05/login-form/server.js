const express = require('express');
const app = express();
const PORT = 3000;
const mysql = require('mysql');

app.use(express.urlencoded({ extended: true }));
app.use(express.json());
app.use(express.static('public'));

mysql.createConnection({
  host: 'localhost',
  user: 'root',
  password: 'password',
  database: 'form'
});

app.get('/', (req, res) => {
  res.sendFile('index.html');
});

app.post('/account', (req, res) => {
  console.log(req.body);
  res.send();
});

app.listen(PORT, () => {
  console.log(`server is ⬆️ and running on PORT ${PORT}`);
});