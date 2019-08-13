'use strict';

const API_KEY = '3690f5eu5qbE1t4usetk9Y3BJx6SmvqA';
const xhr = new XMLHttpRequest();

xhr.onload = function() {
  let myData = JSON.parse(xhr.responseText);
  console.log(myData);
  console.log(myData.data[0].images['480w_still'].url);

  let imgList = document.querySelectorAll('img');
  for (let i = 0; i < imgList.length; i++) {
    // imgList[i].src = `https://media.giphy.com/media/${
    //   myData.data[i].id
    // }/giphy.gif`;
    imgList[i].src = myData.data[i].images['480w_still'].url;
    imgList[i].onclick = function() {
      imgList[i].src = myData.data[i].images['downsized'].url;
    };
  }
};

xhr.open(
  'GET',
  `https://api.giphy.com/v1/gifs/search?q=random&api_key=${API_KEY}&limit=16`
);
xhr.send();
