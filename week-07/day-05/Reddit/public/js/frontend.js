const form = document.querySelector('form');
const titles = document.querySelector('#titles');
const urls = document.querySelector('#urls');

//SHOW POSTS
const xhr = new XMLHttpRequest();
xhr.onload = () => {
  const posts = JSON.parse(xhr.responseText);
  console.log(posts);
  for (let i = posts.posts.length - 1; i >= 0; i--) {
    let div = document.createElement('div');
    document.body.appendChild(div);
    let title = document.createElement('h3');
    title.textContent = posts.posts[i].title;
    div.appendChild(title);
    let postURL = document.createElement('p');
    postURL.textContent = posts.posts[i].url;
    div.appendChild(postURL);
  }
}
xhr.open('GET', '/posts');
xhr.setRequestHeader('Accept', 'application/json');
xhr.send();

// SEND A POST
form.addEventListener('submit', e => {
  e.preventDefault();
  const xhr = new XMLHttpRequest();
  xhr.onreadystatechange = () => {
    if (xhr.readyState === XMLHttpRequest.DONE) {
      if (xhr.status >= 200 && xhr.status < 300) {
        console.log('sent!!');
        const newPost = JSON.parse(xhr.responseText);
        console.log(newPost);
        let div = document.createElement('div');
        let h1 = document.getElementsByTagName('h1')[1];
        h1.after(div);
        let title = document.createElement('h3');
        title.textContent = newPost.title;
        div.appendChild(title);
        let postURL = document.createElement('p');
        postURL.textContent = newPost.url;
        div.appendChild(postURL);
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