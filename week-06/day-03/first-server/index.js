const express = require('express');
let app = express();
const PORT = 3000;
app.listen(PORT); // listening to a port

app.get('/', function(req, res) {
  res.sendFile(__dirname + '/index.html');
});
