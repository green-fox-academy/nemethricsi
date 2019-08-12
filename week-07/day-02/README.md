### Callback Functions

```javascript
let students = [
  { name: 'Mary', score: 90, school: 'East' },
  { name: 'James', score: 100, school: 'East' },
  { name: 'Steve', score: 40, school: 'East' },
  { name: 'Gabe', score: 90, school: 'West' },
  { name: 'Rachel', score: 85, school: 'East' },
  { name: 'Rochelle', score: 95, school: 'West' },
  { name: 'Lynette', score: 75, school: 'East' }
];

let processStudents = function(data, callback) {
  for (let i = 0; i < data.length; i++) {
    if (data[i].school.toLowerCase() === 'east') {
      if (typeof callback === 'function') {
        callback(data[i]);
      }
    }
  }
};
```

#### only executes for East students and if callback is a function:

```js
processStudents(students, function(obj) {
  if (obj.score > 60) {
    console.log(obj.name + ' passed.');
  }
});
```

#### other example

```js
let determineTotal = function() {
  let total = 0;
  let count = 0;

  processStudents(students, function(obj) {
    total += obj.score;
    count++;
  });
  console.log('Total score: ' + total + ' - Total count: ' + count);
};

determineTotal();
```

#### `setInterval`

```js
car colourChanger = document.getElementById('colour-changer');
let colours = ['red', 'blue', 'green', 'pink'];
let counter = 0;

function changeColour() {
  if (counter >= colours.length) {
    counter = 0;
  }

  colourChanger.style.background = colours[counter];
  counter++;

}

let myTimer = setInterval(changeColour, 3000);

colourChanger.onclick = function() {

  clearInterval(myTimer);
  colourChanger.innerHTML = 'Timer stopped';
};
```
