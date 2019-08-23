'use strict';

const form = document.querySelector('form');

function sendGetRequest(url, callback, accept) {
  const xhr = new XMLHttpRequest();
  xhr.onreadystatechange = function () {
    if (xhr.readyState === XMLHttpRequest.DONE) {
      if (xhr.status === 200) {
        callback(JSON.parse(xhr.responseText));
      }
      else {
        console.log('something went wrong');
      }
    }
  }
  xhr.open('GET', url);
  xhr.setRequestHeader('Accepts', accept);
  xhr.send();
}

// function printData(text) {
//   const obj = text;
//   for (let i = 0; i < obj.length; i++) {
//     let h1 = document.createElement('h1');
//     h1.textContent = obj.username;
//     document.body.appendChild('h1');
//   }
// }

form.addEventListener('submit', e => {
  e.preventDefault();
  const xhr = new XMLHttpRequest();
  xhr.onreadystatechange = () => {
    if (xhr.readyState === XMLHttpRequest.DONE) {
      if (xhr.status >= 200 && xhr.status < 300) {
        console.log('data sent!');
      } else {
        console.log('oh noes 😢');
      }
    }
  };
  xhr.open('POST', '/account');
  xhr.setRequestHeader('Content-Type', 'application/json');
  xhr.send(JSON.stringify({ username: user_id.value, password: pswd_id.value }));
  form.reset();
});

sendGetRequest('/accounts', console.log);