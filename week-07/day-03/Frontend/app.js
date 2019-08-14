const express = require('express');
const app = express();
const PORT = 8080;
const path = require('path');
app.use(express.static('assets'));
app.use(express.json());

app.get('/', (req, res) => {
  res.sendFile(path.join(__dirname, '/index.html'));
});

// DOUBLING
// https://github.com/green-fox-academy/teaching-materials/blob/master/workshop/backend-api/exercises/doubling/README.md

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

// DO UNTIL
// https://github.com/green-fox-academy/teaching-materials/blob/master/workshop/backend-api/exercises/do-until/README.md

app.post('/dountil/:action', function(req, res) {
  let number = req.body.until;
  let output = {};
  let sum = 0;
  if (req.params.action === 'sum') {
    for (let i = 0; i <= number; i++) {
      sum += i;
    }
    output = {
      result: sum
    };
    console.log('sum: ' + sum);
  }
  let factor = 1;
  if (req.params.action === 'factor') {
    for (let i = 1; i <= number; i++) {
      factor *= i;
    }
    output = {
      result: factor
    };
    console.log('factor: ' + factor);
  }
  res.json(output);
});

app.listen(PORT, () =>
  console.log(`The server is up and running on PORT ${PORT}`)
);
