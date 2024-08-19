<?php

function foo()
{
  echo "Foo" . PHP_EOL;
}
function bar()
{
  echo "Bar" . PHP_EOL;
}
$functionYangAkanDipanggil = "foo";
$functionYangAkanDipanggil();

$functionYangAkanDipanggil = "bar";
$functionYangAkanDipanggil();

function sayHello(string $name ,$filter){
  // $filter memangil function strtolower/strtoupper
  $finalName = $filter($name);
  echo "Hello $finalName".PHP_EOL;
}
sayHello( "fanan", "strtoupper");
sayHello("FANAN","strtolower");


// PHP mendukung konsep yang bernama variable function
// Variable function adalah kemampuan memanggil sebuah function dari value yang terdapat di sebuah variable
// Untuk menggunakan variable function, kita bisa secara langsung memanggil $namaVariable(), jika ingin menambahkan argument, kita bisa menggunakan $namaVariable(argument)
