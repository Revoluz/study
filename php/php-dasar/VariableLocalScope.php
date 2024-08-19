<?php
// $name = "Fanan"; // global scope tidak bisa diakses dari dalam function
function sayHello(){
  // local scope didalam function,
  $name = "Fanan"; // local variable
}
sayHello();
echo $name . PHP_EOL; // tidak bisa mengakses local variable

// https://docs.google.com/presentation/d/1pV0YWsL61uEHraA0vTVSbxNTtGyVnbev60sIVkqURFs/edit#slide=id.gab0b00b220_0_191
// page 230