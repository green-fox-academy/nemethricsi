const NYT_API_KEY = 'TGPn0jBngPaW6IY9o5CU6O6ByUUdQND9';

const xhr = new XMLHttpRequest();

xhr.onload = function() {
  console.log(xhr.responseText);
};

xhr.open(
  'GET',
  `https://api.nytimes.com/svc/search/v2/articlesearch.json?q=moon+landing+by+Apollo+11&api-key=${NYT_API_KEY}`
);
xhr.send();
