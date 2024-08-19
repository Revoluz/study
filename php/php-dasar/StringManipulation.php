<?php
$name = "Fanan";
$address = "Yogyakarta";
// PHP_EOL = \n
echo "Nama : " . $name . PHP_EOL;
echo "Alamat : " . $address . PHP_EOL;
echo "Value : " . 1000 . PHP_EOL;

// Kadang kita sering melakukan konversi tipe data dari string ke number (int / float) atau sebaliknya
// Di PHP untuk melakukan konversi cukup mudah, kita hanya perlu menggunakan tanda kurung ( tipe data )
// Tipe data untuk string adalah string, untuk number bisa menggunakan int untuk integer dan float untuk floating point

$valueString = (string)100;
var_dump($valueString);

$valueInt = (int)"100";
var_dump($valueInt);

$valueInt = (int)"0";
var_dump($valueInt);

$valueFloat = (float)"1.02";
var_dump($valueFloat);

$name = "Fanan";
echo $name[0] . PHP_EOL;
echo $name[1] . PHP_EOL;
echo $name[2] . PHP_EOL;
echo $name[3] . PHP_EOL;
echo $name[4] . PHP_EOL;
// echo $name[5] . PHP_EOL; //error

echo "Hello " . $name . ", Sedang Belajar PHP" . PHP_EOL;
// variable parsing
echo "Hello $name Sedang Belajra PHP" . PHP_EOL;

$var = "var";
echo "This is {$var}s".PHP_EOL;