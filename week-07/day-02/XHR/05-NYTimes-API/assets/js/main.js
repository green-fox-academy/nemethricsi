const NYT_API_KEY = 'TGPn0jBngPaW6IY9o5CU6O6ByUUdQND9';
const xhr = new XMLHttpRequest();

xhr.onload = function() {
  console.log(JSON.parse(xhr.responseText));
  const articles = JSON.parse(xhr.response);
  console.log(articles.response.docs[0].headline.main);

  for (let i = 0; i < articles.response.docs.length; i++) {
    let myDiv = document.createElement('div');
    myDiv.classList.add('post-container');
    let main = document.querySelector('.main');
    main.appendChild(myDiv);
    let header = document.createElement('h3');
    let myLink = document.createElement('a');
    myLink.setAttribute('href', articles.response.docs[i].web_url);
    myLink.setAttribute('target', '_blank');
    header.appendChild(myLink);
    myLink.textContent = articles.response.docs[i].headline.main;
    myDiv.appendChild(header);
    let snippet = document.createElement('p');
    snippet.textContent = articles.response.docs[i].snippet;
    myDiv.appendChild(snippet);
    let pubDate = document.createElement('p');
    pubDate.textContent =
      'Posted on: ' +
      new Date(articles.response.docs[i].pub_date).toDateString();
    myDiv.appendChild(pubDate);
  }
};

xhr.open(
  'GET',
  `https://api.nytimes.com/svc/search/v2/articlesearch.json?q=moon+landing+by+Apollo+11&api-key=${NYT_API_KEY}`
);
xhr.send();
