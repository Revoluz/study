<?php
// function with defalut value
function sayHello($name = "Anonymous")
{
  echo "Hello $name", PHP_EOL;
}
sayHello("Fanan");
sayHello();
// Default argument value bisa disimpan argument manapun
// Namun jika argument lebih dari satu, dan kita menyimpan default argument value di parameter awal, maka itu kurang berguna
// default argument disarankan di parameter belakang bukan di depan
// function sayHi($name = "Anonymous",$lastname)
function sayHi($firstname, $lastname = "")
{
  echo "Hi $firstname $lastname", PHP_EOL;
}
// sayHi("lastname"); //error tidak bisa
sayHi("firstname");

function sum(int $first, int $last)
{
  $total = $first + $last;
  echo "Total $first + $last = $total" . PHP_EOL;
}
sum("100", "99");
sum("100", 100);
sum(200, 100);
sum(true, false);
// sum([], []); error

// parameter array biasa
// function sumAll(array $values)
// {
//   $total = 0;
//   foreach ($values as  $value) {
//     $total += $value;
//   }
//   echo "Total " . implode(",", $values) . " = $total" . PHP_EOL;
// }
// sumAll([1,2,3,4,5]);

// parameter menggunakan Variable-length Argument List
function sumAll(...$values)
{
  // $values dikonversi menjadi array
  $total = 0;
  foreach ($values as  $value) {
    $total += $value;
  }
  echo "Total " . implode(",", $values) . " = $total" . PHP_EOL;
}
sumAll(1, 2, 3, 4, 5);
$values =[1,2,3,4,5,6,7];
// ...$values agar dikonversi menjadi Variable-length Argument List
sumAll(...$values);

// type declaration function argument
// Sama seperti variable, argument di PHP bisa kita masukkan data yang dinamis
// Kadang terlalu dinamis juga menyulitkan jika ternyata kita hanya ingin membuat function yang menggunakan argument dengan tipe data tertentu
// Untungnya di PHP, kita bisa menambahkan type data di argument, sehingga PHP akan melakukan pengecekan ketika kita mengirim value ke function tersebut
// Jika tipe data value tidak sesuai, maka akan terjadi error
// Secara default PHP akan melakukan percobaan konversi tipe data secara otomatis, misal jika kita menggunakan tipe int, tapi kita mengirim string, maka PHP akan otomatis mengkonversi string tersebut menjadi int




//  Type
// Keterangan
// Class / Interface
// Parameter harus tipe Class / Interface
// self
// Parameter harus sama dengan Class dimana function ini dibuat
// array
// Parameter harus array
// callable
// Parameter harus callable
// bool
// Parameter harus boolean 
// float
// Parameter harus floating point
// Valid Types (1)
//  Type
// Keterangan
// int
// Parameter harus integer number
// string
// Parameter harus string
// interable
// Parameter harus array atau tipe Traversable
// object
// Parameter harus sebuah object

// Variable-length Argument List
// Variable-length argument list merupakan kemampuan dimana kita bisa membuat sebuah parameter yang menerima banyak value
// Variable-length argument list secara otomatis akan membuat argument tersebut menjadi array, namun kita tidak perlu manual mengirim array ke functionnya
// Variable-length argument list hanya bisa dilakukan di argument posisi terakhir
// Untuk membuat variable-length argument list, kita bisa menggunakan tanda … (titik tiga kali) sebelum nama argument
