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
  let response = {};
  console.log(req.query.input);
  if (req.query.input === undefined || req.query.input === '') {
    response = {
      error: 'Please provide an input!'
    };
  } else {
    response = {
      received: req.query.input,
      result: Number(req.query.input) * 2
    };
  }

  res.send(response);
});

// GREETER
// https://github.com/green-fox-academy/teaching-materials/blob/master/workshop/backend-api/exercises/greeter/README.md

app.get('/greeter', (req, res) => {
  let response;
  console.log(req.query.name);
  console.log(req.query.title);
  if (req.query.name === undefined && req.query.title === undefined) {
    response = {
      error: 'Please provide a name and a title!'
    };
  } else if (req.query.name === undefined && req.query.title !== undefined) {
    response = {
      error: 'Please provide a name as well!'
    };
  } else if (req.query.title === undefined && req.query.name !== undefined) {
    response = {
      error: 'Please provide a title as well!'
    };
  } else {
    response = {
      welcome_message: `Oh, hi there ${req.query.name}, my dear ${
        req.query.title
      }!`
    };
  }

  res.send(response);
});

// AppendA
// https://github.com/green-fox-academy/teaching-materials/blob/master/workshop/backend-api/exercises/append-a/README.md
app.get('/appenda/:appendable', (req, res) => {
  let response = {};
  response = {
    appended: req.params.appendable + 'a'
  };
  res.send(response);
});

app.listen(PORT, () =>
  console.log(`The server is up and running on PORT ${PORT}`)
);
