const express = require('express');
const app = express();

app.get('/groot', (req, res) => {
  const message = req.query.message;
  if (message.length !== 0) {
    res.send({ received: message, translated: 'I am Groot!' });
  } else {
    res.status(400).send({ error: 'I am Groot!' });
  }

});

module.exports = app;
