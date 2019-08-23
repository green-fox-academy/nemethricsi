const express = require('express');
const app = express();
const PORT = 3000;
const mysql = require('mysql');

app.use(express.urlencoded({ extended: true }));
app.use(express.json());
app.use(express.static('public'));

const connection = mysql.createConnection({
  host: 'localhost',
  user: 'root',
  password: 'password',
  database: 'form'
});

connection.connect(err => {
  if (err) {
    console.log("error connecting with the database");
    console.log(err.message);
    return;
  }
  console.log("database connection is established");
});

app.get('/', (req, res) => {
  res.sendFile('index.html');
});

app.get('/show', (req, res) => {
  res.sendFile('public/show.html', { root: __dirname });
});

//API endpoint for users
app.get('/accounts', (req, res) => {
  connection.query("select * from users",
    (err, rows) => {
      if (err) {
        console.log(err.message);
      }
      if (req.accepts('html')) {
        res.render('show.html');
      } else if (req.accepts('application/json')) {
        res.send(rows);
      }

    }
  );
});


app.post('/account', (req, res) => {
  const { result } = req.body;
  const query = `insert into users(username,password) values(?, ?);`;
  console.log(req.body);
  connection.query(query, [req.body.username, req.body.password], (err, result) => {
    if (err === null) {
      res.sendStatus(201);
    }
    else {
      console.log(err);
      res.sendStatus(500);
    }
  });
});

app.listen(PORT, () => {
  console.log(`server is ⬆️ and running on PORT ${PORT}`);
});