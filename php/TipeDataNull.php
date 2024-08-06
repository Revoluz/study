<?php
// Nilai NULL merepresentasikan sebuah variable tanpa nilai.
// Saat kita membuat variable, lalu ingin menghapus data yang terdapat di variable tersebut, kita bisa menggunakan NULL untuk mengosongkan variable tersebut
// Untuk membuat data NULL, kita bisa menggunakan kata kunci NULL (case insensitive)

$name = "Eko";
$name = null;

$age = -12;

echo "Name : ";
echo $name;
echo "\n";

echo "Age : ";
echo $age;
echo "\n";

// adang kita ingin tahu apakah sebuah data bernilai null atau tidak
// Untuk mengecek apakah sebuah data bernilai null, kita bisa menggunakan function is_null($variable)

echo "is Null? : ";
echo var_dump(is_null($name));
echo "\n";
echo var_dump(is_null($age));
echo "\n";

// is_null($tidaAda) //error

//menghapus variabel
// Selain mengubah menjadi NULL, di PHP juga kita bisa menghapus sebuah variable, caranya dengan menggunakan function unset($variable)
// Namun hati-hati, ketika kita hapus variable, kita tidak bisa lagi mengakses variable tersebut, bahkan function is_null($variable) pun akan menjadi error jika mengakses variable tersebut.
// Agar lebih aman, kita bisa menggunakan function isset($variable) untuk mengeccek apakah sebuah variable ada dan nilainya tidak NULL

$contoh ="variable contoh";
unset($contoh);
// echo $contoh; //undefined
var_dump(isset($contoh));
var_dump(isset($age));
