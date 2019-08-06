// If the fourth p has a 'dolphin' class, replace apple's content with 'pear'
if (document.querySelectorAll('p')[3].classList.contains('dolphin') === true) {
  document.getElementsByClassName('apple')[0].innerHTML = 'pear';
}

//If the first p has an 'apple' class, replace cat's content with 'dog'
if (document.querySelector('p').classList.contains('apple') === true) {
  document.querySelector('.cat').innerHTML = 'dog';
}

// Make apple red by adding a .red class
document.querySelector('.apple').classList.add('red');

// Make balloon less balloon-like (change its shape)
document.getElementsByClassName('balloon')[0].style.borderRadius = '0%';
