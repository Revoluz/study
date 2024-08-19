<?php
$data = [1,2,3,4,5,6,7,8,9,10];
$mapFunction = fn(int $value)=>$value * 10; 
$dataResult = array_map($mapFunction, $data);
var_dump($dataResult);
$dataResult = array_map(fn(int $value) => $value / 10, $dataResult);
var_dump($dataResult);

rsort($data);
var_dump($data);
rsort($data);

var_dump( array_keys($data)); // get array indeks
var_dump(array_values($data)); // get array value

$person = [
  "first_name"=> "ahmad",
  "last_name" => "fanani",
];
var_dump(array_keys($person));
var_dump(array_values($person));

// Di PHP juga terdapat banyak sekali function bawaan yang bisa kita gunakan untuk memanipulasi data Array
// https://www.php.net/manual/en/ref.array.php 
// Contoh Array Function
//  Function
// Keterangan
// array_keys()
// Mengambil semua keys milik array
// array_values()
// Mengambil semua values milik array
// array_map()
// Mengubah semua data array dengan callback
// sort()
// Mengurutkan array
// rsort()
// Mengurutkan array terbalik
// shuffle()
// Mengubah posisi data di array secara random
