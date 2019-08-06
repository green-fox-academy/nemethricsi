// 1) replace the list items' content with items from this list:
// ['apple', 'banana', 'cat', 'dog']
let newList = ['apple', 'banana', 'cat', 'dog'];
let oldList = document.querySelectorAll('li');

for (let i = 0; i < oldList.length; i++) {
  oldList[i].textContent = newList[i];
  //console.log(oldList[i]);
}

// 2) change the <ul> element's background color to 'limegreen'
//   - use css class to change the color instead of the style property
let myList = document.querySelector('ul');
myList.classList.add('limegreen');

// let btn = document.querySelector('.button');
// btn.onclick = () => myList.classList.toggle('limegreen');
