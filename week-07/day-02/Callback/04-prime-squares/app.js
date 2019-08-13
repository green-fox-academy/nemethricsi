//   1: generate 100 divs to the <section> element and add index numbers to it as the element's textContent
//   2: Create a function that adds a 'not-prime' class to a div if it's not a prime and 'prime' if it is
//   3: Create a timer that keeps calling the prime validatior function until it reaches the end of elements
//    - the timer should fire every 100ms
//    - the timer should stop when there are no more elements left to be colored

document
  .getElementsByTagName('section')[0]
  .removeChild(document.getElementsByTagName('div')[0]);

for (let i = 1; i < 101; i++) {
  let myDiv = document.createElement('div');
  myDiv.textContent = `${i}`;
  document.getElementsByTagName('section')[0].appendChild(myDiv);
  setTimeout(primeOrNot(i), 100);
}

function primeOrNot(number) {
  for (let i = 2; i <= number / 2; i++) {
    if (number % i == 0) {
      document.querySelectorAll('div')[i].classList.add('not-prime');
    } else {
      document.querySelectorAll('div')[i].classList.add('prime');
    }
  }
}
