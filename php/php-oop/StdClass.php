<?php

$array = [
  "firstName" => "Ahmad",
  "middleName"=>"Fadhil",
  "lastName" => "Fanani",
];

$object = (object) $array;
// nama object nya stdClass
var_dump($object);

echo "First Name $object->firstName".PHP_EOL;
echo "Middle Name $object->middleName" . PHP_EOL;
echo "Last Name $object->lastName" . PHP_EOL;

$arrayLagi = (array) $object;
var_dump($arrayLagi);

require_once __DIR__."/data/ConstructPerson.php";
$person = new ConstructPerson("Fanan", "Jogja",17);
var_dump($person);
$arrayPerson = (array) $person;
var_dump($arrayPerson);

// stdClass

// stdClass adalah class kosong bawaan dari PHP
// stdClass biasanya digunakan ketika kita melakukan konversi dari tipe lain menjadi tipe object
// stdClass sangat berguna ketika misal kita ingin melakukan konversi dari tipe data array ke object secara otomatis
