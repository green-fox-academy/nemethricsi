'use strict';

const URL = 'http://api.icndb.com/jokes/random';
const container = document.getElementsByTagName('div')[0];
const button = document.querySelector('button');

button.addEventListener('click', () => {
  fetch(URL)
    .then(response => response.json())
    .then(myJson => container.textContent = myJson.value.joke)
    .catch(err => {
      console.error('Something went wrong!');
      container.innerHTML = '<p style=color:red;>Something went wrong! :(</p>';
    });
});
