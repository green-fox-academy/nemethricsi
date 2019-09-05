const form = document.querySelector('form');
const titles = document.querySelector('#titles');
const urls = document.querySelector('#urls');
const main = document.querySelector('main');
const aside = document.querySelector('aside');
const postContainer = document.querySelector('.posts');
const submitButtons = document.querySelectorAll('.submit-button');
const bigButton = document.getElementById('big-button');

//SHOW POSTS
const xhr = new XMLHttpRequest();
xhr.onload = () => {
  const posts = JSON.parse(xhr.responseText);
  console.log(posts);
  for (let i = posts.posts.length - 1; i >= 0; i--) {
    let div = document.createElement('div');
    postContainer.appendChild(div);
    let title = document.createElement('h3');
    title.textContent = posts.posts[i].title;
    div.appendChild(title);
    let postURL = document.createElement('a');
    postURL.textContent = posts.posts[i].url;
    postURL.setAttribute('href', posts.posts[i].url);
    postURL.setAttribute('target', '_blank');
    div.appendChild(postURL);
  }
}
xhr.open('GET', '/posts');
xhr.setRequestHeader('Accept', 'application/json');
xhr.send();

submitButtons.forEach(e => {
  e.addEventListener('click', () => {
    postContainer.textContent = '';
    aside.textContent = '';

    // let form2 = document.createElement('form');
    // form2.setAttribute('action', '/posts');
    // form2.setAttribute('method', 'POST');
    // postContainer.appendChild(form2);
    // let inputTitle = document.createElement('input');
    // inputTitle.setAttribute('type', 'text');
    // inputTitle.setAttribute('id', 'titles');
    // inputTitle.setAttribute('name', 'title');
    // inputTitle.setAttribute('placeholder', 'Title');
    // form2.appendChild(inputTitle);
    // let inputURL = document.createElement('input');
    // inputURL.setAttribute('type', 'url');
    // inputURL.setAttribute('id', 'urls');
    // inputURL.setAttribute('placeholder', 'Url');
    // form2.appendChild(inputURL);
    // let button = document.createElement('button');
    // button.setAttribute('id', 'postButton');
    // button.setAttribute('type', 'submit');
    // button.textContent = 'POST';
    // form2.appendChild(button);

    // button.onclick = () => {
    //   // e.preventDefault();
    //   const xhr = new XMLHttpRequest();
    //   // xhr.onload = () => {
    //   //   console.log('sent!!');
    //   // }
    //   xhr.open('POST', '/posts');
    //   xhr.setRequestHeader('Content-Type', 'application/json'); // Request Headers
    //   xhr.setRequestHeader('Accept', 'application/json'); // Request Headers
    //   xhr.send(JSON.stringify({ 'title': inputTitle.value, 'url': inputURL.value }));

    //   document.location.reload(true);
    // };
  });
});

    //SEND A POST
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
            postContainer.insertBefore(div, bigButton.nextSibling);
            let title = document.createElement('h3');
            title.textContent = newPost.title;
            div.appendChild(title);
            let postURL = document.createElement('a');
            postURL.textContent = newPost.url;
            postURL.setAttribute('href', newPost.url);
            postURL.setAttribute('target', '_blank');
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