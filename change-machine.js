// Author: Shannon Harvey
let readline = require('readline-sync');

//remember readline.question is the tool to
//help read the question and answer it

console.log("BLeep BlOp i'm a CHanGE maCHINe!");

let cents = Number (readline.question("Please enter cents as a positive integer: "));

console.log(+ cents + " cents makes:");

let quarters = Math.floor(cents / 25);
let otherCents = cents % 25;
console.log(quarters + " quarters");
//The code above displays the quarters

let dimes = Math.floor(otherCents / 10);
let otherCents2 = otherCents % 10;
console.log(dimes + " dimes");
//The code above displays the dimes

let nickels = Math.floor(otherCents2 / 5);
let otherCents3 = otherCents2 % 5;
console.log(nickels + " nickels");
//The code above displays the nickels

let pennies = Math.floor(otherCents3 / 1);
console.log(pennies + " pennies");
//The code above displays the pennies

console.log("BLOop BleEp! i Hope yOU aRE SATiSfieD wITh thiS SerVicE!");
