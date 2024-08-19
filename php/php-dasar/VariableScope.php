<?php
$name = "Fanan"; // global scope tidak bisa diakses dari dalam function
function sayHello(){
  // local scope didalam function,
  global $name; //global keyword agar dapat mengakses variable global scope
  echo $name.PHP_EOL;
  // var_dump($GLOBALS);
  // echo $GLOBALS["name"].PHP_EOL;
}
sayHello();
// https://docs.google.com/presentation/d/1pV0YWsL61uEHraA0vTVSbxNTtGyVnbev60sIVkqURFs/edit#slide=id.gab0b00b220_0_191
// page 230

// Selain menggunakan global keyword, setiap variable yang dibuat di global scope, secara otomatis akan disimpan di dalam array $GLOBAL oleh PHP
// Jadi kita bisa menggunakan $GLOBAL variable dengan key nama variable nya dari dalam function jika ingin mengakses global variable
// $GLOBAL adalah variable yang bersifat superglobal, artinya bisa diakses dari scope manapun


// Static Scope

// Secara default local variable itu siklus hidupnya hanya sebatas function nya dieksekusi
// Jika sebuah function selesai dieksekusi, maka siklus hidup local variable nya selesai
// PHP memiliki scope yang bernama static
// Static scope hanya bisa di set ke local variable
// Saat kita membuat sebuah local variable menjadi static, maka siklus hidupnya tidak akan berhenti ketika sebuah function selesai dieksekusi
// Artinya jika function tersebut dieksekusi lagi, maka static variable tersebut akan memiliki value dari sebelumnya
