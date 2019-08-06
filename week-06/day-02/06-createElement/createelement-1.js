// Add an item that says 'The Green Fox' to the asteroid list.
let newListItem = document.createElement('li');
let list = document.querySelector('ul');
newListItem.innerHTML = 'The Green Fox';
list.appendChild(newListItem);

// Add an item that says 'The Lamplighter' to the asteroid list.
let newListItem2 = document.createElement('li');
newListItem2.innerHTML = 'The Lamplighter';
list.appendChild(newListItem2);

// Add a heading saying 'I can add elements to the DOM!' to the .container.
let myHeading = document.createElement('h3');
myHeading.innerHTML = 'I can add elements to the DOM!';
document.querySelector('.container').appendChild(myHeading);

// Add an image, any image, to the container.
let myImage = document.createElement('img');
myImage.src =
  'https://res.cloudinary.com/practicaldev/image/fetch/s--ODpOdaog--/c_limit%2Cf_auto%2Cfl_progressive%2Cq_auto%2Cw_880/https://upload.wikimedia.org/wikipedia/commons/thumb/5/5a/DOM-model.svg/800px-DOM-model.svg.png';

myImage.style.height = '400px';
document.querySelector('.container').appendChild(myImage);
