'use strict';

// -  Create a variable named `firstList`
//    with the following content: `[1, 2, 3]`
// -  Create a variable named `secondList`
//    with the following content: `[4, 5]`
// -  Log "p2 is longer" to the console if `secondList` has more elements than `firstList`

let firstList = [1, 2, 3];
let secondList = [4, 5, 3, 4, 5];

if (firstList.length < secondList.length) {
  console.log('p2 is longer');
}
