const express = require('express');
let app = express();
const PORT = 3000;
app.listen(PORT);

app.set('view engine', 'ejs');

app.get('/', (req, res) => {
  res.render('home', { name: req.query.name || 'Guest' });
});
