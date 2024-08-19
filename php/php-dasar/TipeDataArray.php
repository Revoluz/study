<?php
$values = array(10, 9, 8, 7.8, "6", true);
var_dump($values);
echo "\n";
var_dump($values[3]);
echo "\n";
var_dump($values[4]);

$names = ["Ahmad", "Fadhil", "Fanani"];
echo "\n";
var_dump($names);
echo "\n";
// mengubah value
$names[2] = "Fanxx";
var_dump($names);
echo "\n";
// menghapus array
unset($names[2]);
var_dump($names);
echo "\n";
// menambah array
$names[] = "Fanani";
var_dump($names);
echo "\n";
// menghitung array
echo "Jumlah Array Names : " . count($names);
echo "\n";

// Array Sebagai Map / array assosiatif
// Biasanya di kebanyakan bahasa pemrograman, terdapat tipe data bernama Map, yaitu asosiasi antara key dan value
// Namun di PHP, Map bisa dibuat menggunakan Array
// Secara default Array akan menggunakan index (number) sebagai key dan value nya kita bisa bebas memasukkan data ke dalam Array
// Namun jika kita ingin, kita juga bisa mengubah index nya tidak harus menggunakan number, bisa gunakan tipe data lain, seperti string misal nya
// Hal tersebut terlihat seperti Map di bahasa pemrograman lain
// defaultnya sebenarnya sudah ada keynya yaitu index arraynya
// $fanan = array(
//   0 => "fanan",
//   1 => "Fanan Fadhil",
//   2 => 19,
// );
// kita bisa custom key nya / tidak memakai index default nya
$fanan = array(
  "id" => "fanan",
  "name" => "Fanan Fadhil",
  "age" => 19,
  "address" => array(
    "city" => "Yogyakarta",
    "country" => "Indonesia",
  )
);
var_dump($fanan);
echo $fanan["id"];
echo "\n";
echo $fanan["address"][ "city"];
echo "\n";
$pragos =[
  "id"=> "pragos",
  "name"=> "pragos escobar",
  "age"=> 35,
  "address"=> [
    "city" =>"Jakarta",
    "country" => "Indonesia",
  ]
];
var_dump($pragos);
echo $pragos["address"]["country"];
echo "\n";

