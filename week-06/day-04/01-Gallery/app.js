//database
const pictures = [
  {
    alt: 'apple',
    url: '/assets/images/0.jpg',
    thumbnail: '/assets/images/0_thumbnail.jpg',
    text: 'An apple is a sweet, edible fruit produced by an apple tree (Malus domestica). Apple trees are cultivated worldwide and are the most widely grown species in the genus Malus.'
  },
  {
    alt: 'blueberry',
    url: '/assets/images/1.jpg',
    thumbnail: '/assets/images/1_thumbnail.jpg',
    text: 'Blueberries are perennial flowering plants with blue– or purple–colored berries. They are classified in the section Cyanococcus within the genus Vaccinium.'
  },
  {
    alt: 'kiwi',
    url: '/assets/images/2.jpg',
    thumbnail: '/assets/images/2_thumbnail.jpg',
    text: 'Kiwi or kiwis are flightless birds native to New Zealand, in the genus Apteryx and family Apterygidae. Approximately the size of a domestic chicken, kiwi are by far the smallest living ratites '
  },
  {
    alt: 'lime',
    url: '/assets/images/3.jpg',
    thumbnail: '/assets/images/3_thumbnail.jpg',
    text: 'A lime is a citrus fruit, which is typically round, green in color, 3–6 centimetres (1.2–2.4 in) in diameter, and contains acidic juice vesicles.'
  },
  {
    alt: 'strawberry',
    url: '/assets/images/4.jpg',
    thumbnail: '/assets/images/4_thumbnail.jpg',
    text: 'The garden strawberry is a widely grown hybrid species of the genus Fragaria, collectively known as the strawberries, which are cultivated worldwide for their fruit.'
  },
  {
    alt: 'watermelon',
    url: '/assets/images/5.jpg',
    thumbnail: '/assets/images/5_thumbnail.jpg',
    text: 'Citrullus lanatus is a plant species in the family Cucurbitaceae, a vine-like (scrambler and trailer) flowering plant originating in West Africa. It is cultivated for its fruit.'
  }
];

// loading in the thumbnail pictures & textbox
let thumbnails = document.querySelectorAll('.thumbnail');
for (let i = 0; i < thumbnails.length; i++) {
  thumbnails[i].style.backgroundImage = `url("/assets/images/${i}_thumbnail.jpg")`;
  //thumbnails[i].style.backgroundImage = `url(pictures${i}.thumbnail)`; WHY NOT ??
  thumbnails[i].onclick = function () {
    mainImage.style.backgroundImage = `url("/assets/images/${i}.jpg")`;
    title.textContent = pictures[i].alt;
    text.textContent = pictures[i].text;
  }
}

//init the main image
let mainImage = document.querySelector('.main-image');
let title = document.querySelector('.textbox h1');
title.textContent = pictures[0].alt;
let text = document.querySelector('.textbox p')
text.textContent = pictures[0].text;
mainImage.style.backgroundImage = 'url("/assets/images/0.jpg")';

document.querySelector('.prev').onclick = () => {
  //go to PREVIOUS picture and thumbnail
  //let currentImage = document.querySelector('.main-image');

}
document.querySelector('.next').onclick = () => {
  //go to NEXT picture and thumbnail
}