const planetData = [
  {
    category: 'inhabited',
    content: 'Foxes',
    asteroid: true
  },
  {
    category: 'inhabited',
    content: 'Whales and Rabbits',
    asteroid: true
  },
  {
    category: 'uninhabited',
    content: 'Baobabs and Roses',
    asteroid: true
  },
  {
    category: 'inhabited',
    content: 'Giant monsters',
    asteroid: false
  },
  {
    category: 'inhabited',
    content: 'Sheep',
    asteroid: true
  }
];

// Remove the king from the list.
document.querySelector('.asteroids').removeChild(document.querySelector('li'));

// Fill the list based on the following list of objects.
// Only add the asteroids to the list.
// Each list item should have its category as a class and its content as text content.

for (let i = 0; i < planetData.length; i++) {
  if (planetData[i].asteroid) {
    let newItem = document.createElement('li');
    newItem.textContent = planetData[i].content;
    document.querySelector('.asteroids').appendChild(newItem);
  }
}
