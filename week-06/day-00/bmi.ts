'use strict';

let massInKg: number = 81.2;
let heightInM: number = 1.78;

// Print the Body mass index (BMI) based on these values

printBmi(massInKg, heightInM);

function printBmi(kg: number, m: number) {
  let bmi: number = kg / (m * m);
  console.log('The BMI is: ' + bmi);
}
