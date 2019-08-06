// Write the image's url to the console.
let imageUrl = document.getElementsByTagName('img')[0].src;
console.log('The URL of the image is: ' + imageUrl);

// Replace the image with a picture of your favorite animal.
document
  .getElementsByTagName('img')[0]
  .setAttribute(
    'src',
    'https://i-love-png.com/images/8a4c9b162a4495af9185c91a57b6334f-cute-dog-puppy-tail-ear-tongue-flat_6801.png'
  );

// Make the link point to the Green Fox Academy website.
document.getElementsByTagName('a')[0].href = 'https://www.greenfoxacademy.com/';

// Disable the second button.
// document.getElementsByClassName('this-one')[0].disabled = true; OR:
document.querySelector('.this-one').disabled = true;

// Replace its text with 'Don't click me!
document.querySelector('.this-one').innerHTML = "Don't click me!";
