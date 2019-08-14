const express = require('express');
const app = express();
const PORT = 8080;
const path = require('path');
app.use(express.static('assets'));

app.get('/', (req, res) => {
  res.sendFile(path.join(__dirname, '/index.html'));
});

// Create a GET /doubling endpoint
// It should be able to handle a query parameter called input, eg. http://localhost:8080/doubling?input=15
// This endpoint should respond with a json object with the doubled amount of the input:

app.get('/doubling', (req, res) => {
  if (Number(req.query.input) === NaN) {
    const response = {
      error: 'Please provide an input!'
    };
  }
  const response = {
    received: req.query.input,
    result: Number(req.query.input) * 2
  };
  res.send(response);
});

app.listen(PORT, () =>
  console.log(`The server is up and running on PORT ${PORT}`)
);
