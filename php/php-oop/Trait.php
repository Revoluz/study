<?php

require_once __DIR__."/data/SayGoodBye.php";

use Data\Traits\{Person,SayHello,SayGoodBye};

$person = new Person();
$person->goodBye( "Joko");
$person->hello("Budi");
$person->name="Fanan";
var_dump($person->name);
$person->run();

// Trait

// Selain class dan interface, di PHP terdapat feature lain bernama trait
// Trait mirip dengan abstract class, kita bisa membuat konkrit function atau abstract function
// Yang membedakan adalah, di trait bisa kita tambahkan ke dalam class lebih dari satu
// Trait mirip seperti ekstension, dimana kita bisa menambahkan konkrit function ke dalam class dengan trait
// Secara sederhana trait adalah digunakan untuk menyimpan function-function yang bisa digunakan ulang di beberapa class
// Untuk menggunakan trait di class, kita bisa menggunakan kata kunci use
