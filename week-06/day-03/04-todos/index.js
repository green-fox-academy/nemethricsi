const express = require('express');
let app = express();
const PORT = 3000;
app.listen(PORT);
app.set('view engine', 'ejs');
app.get('/', (req, res) => {
  res.render('index', { list: todos });
});

const todos = ['get up', 'survive', 'go back to bed'];
