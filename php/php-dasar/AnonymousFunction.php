<?php
$sayHello = function (string $name){
  echo "Hello $name".PHP_EOL;
};
$sayHello("test");

function sayGoodBye(string $name,$filter){
  $finalName =$filter($name);
  echo "Good bye $finalName". PHP_EOL;
}
sayGoodBye("Fanan",function(string $name): string {
  return strtoupper($name);
});

// atau
$filterFunction=function (string $name): string {
  return strtoupper($name);
};
sayGoodBye("Fadhil",$filterFunction);

// Mengakses Variable di Luar Closure
// Secara default, anonymous function tidak bisa mengakses variabel yang terdapat diluar function
// Jika kita ingin menggunakan variable yang terdapat diluar anonymous function, kita perlu secara explicit menyebutkannya menggunakan kata kunci use lalu diikuti variable-variable yang ingin kita gunakan

$firstName = "Ahmad";
$lastName = "Fadhil";
// menakses variable global
$sayHelloFanan = function() use ($firstName, $lastName){
  echo "Hello $firstName $lastName ".PHP_EOL;
};
// tetap menggambil variable yang ada di atas anonymous function
$firstName = "Fanan";
$lastName = "Fanani";
$sayHelloFanan();