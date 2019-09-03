const form = document.querySelector('form');
const titles = document.querySelector('#titles');
const urls = document.querySelector('#urls');

//SHOW POSTS


// SEND A POST
form.addEventListener('submit', e => {
  e.preventDefault();
  const xhr = new XMLHttpRequest();
  xhr.onreadystatechange = () => {
    if (xhr.readyState === XMLHttpRequest.DONE) {
      if (xhr.status >= 200 && xhr.status < 300) {
        console.log('sent!!');
      } else {
        console.log('oh noes 😢');
      }
    }
  };
  xhr.open('POST', '/posts');
  xhr.setRequestHeader('Content-Type', 'application/json'); // Request Headers
  xhr.setRequestHeader('Accept', 'application/json'); // Request Headers
  xhr.send(JSON.stringify({ 'title': titles.value, 'url': urls.value })); // Request Body
  form.reset();
});