// Author: Shannon Harvey
var readline = require("readline-sync");

console.log();
console.log("*****************************************************************");
console.log("                          HAUNTED HOUSE");
console.log("                 A game by Shannon Harvey");
console.log("*****************************************************************");
console.log("You are standing in front of a spooky haunted house.");
console.log("You hear what sounds like screaming coming from inside the house.");
var enterHouse = readline.question("Will you enter the house? (yes or no) ");
if(enterHouse === "n" || enterHouse === "no") {
    console.log("You're one of the smart people :)" );
} else {
  let stayed = readline.question("You get inside search the house, there's no one here, do you leave? (yes or no) ");

  if(stayed === "n" || stayed === "no") {
     let getComfortable = readline.question("you decide to spend the night so you first get a shower and as you get dressed you just saw something walk past by behind you in the mirror do investigate? (yes or no) ");

  if(getComfortable === "n" || getComfortable === "no"){
    console.log("you get in bed but then fall in a deep hole and wake up from a nightmare, you should see a Psychiatrist");
  } else {
    console.log("you looked behind you and a cat jumped, ha ghosts aren't real but the cat did scratch you a lot");
  }
} else {
  let getOut = readline.question("You try to open the door but it won't budge and start to hear giggling what do you do (open door or turn around) ");

  if(getOut === "o" || getOut === "open door") {
    console.log("your crazy ex shoots you, shouldn't have cheated dumb dumb. :(");
  } else {
    let littleGirl = readline.question("you see a little girl crying and she asks for help what  do you do (leave or help)")
    if (littleGirl === "l" || littleGirl === "leave") {
      console.log("You smart, like who giggles and then cries");
    } else {
      console.log("she ate your soul, dummy why would she giggle in a haunted house");
    }
  }
  }
}
console.log("Thanks for playing!");
