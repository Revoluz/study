<?php

$first = [
  "first_name"=> "Ahmad"
];
$last =[
  "first_name"=> "Fadhil",
  "last_name"=> "Fanani"
];
// jika ada nama/key yang sama maka yang didahulukan $first 
$full = $first+$last;
var_dump($full);
echo "\n";
$a = [
  "first_name" => "Fadhil",
  "last_name" => "Fanani"
];
$b = [
  "last_name" => "Fanani",
  "first_name" => "Fadhil"
];
// jika posisi keynya berbeda tetapi nama keynya sama maka hasilnya akan tetap true
var_dump($a==$b); // true 
var_dump($a === $b); // false dikarenakan posisi nya berbeda
//  Contoh
// Nama
// Keterangan
// $a + $b
// Union
// Menggabungkan array $a dan $b
// $a == $b
// Equality
// true jika $a dan $b memiliki key-value sama
// $a === $b
// Identity
// true jika $a dan $b memiliki key-value sama dan posisi sama
// $a != $b
// Inequality
// true jika $a dan $b tidak sama
// $a <> $b
// Inequality
// true jika $a dan $b tidak sama
// $a !== $b
// Nonidentity
// true jika $a dan $b tidak identik
