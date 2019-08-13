const express = require('express');
const app = express();
const PORT = 3000;
app.set('view engine', 'ejs');
app.use(express.static('assets'));

app.get('/', (req, res) => {
  res.render('home');
});

app.get('/index.js', (req, res) => {
  res.send('Yo!');
});

app.get('/assets/js/xhr.js', (req, res) => {
  res.send('Yo!');
});

app.listen(PORT, () => {
  console.log(`Server is listening on PORT ${PORT}`);
});
