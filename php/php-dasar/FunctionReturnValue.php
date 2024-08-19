<?php
function sum(int $first,int $second){
  $total = $first+$second;
  return $total;
}
$result = sum(10,10);
var_dump($result);
$result = sum(100, 10);
var_dump($result);

function getFinalValue(int $value){
  if ($value>= 80) {
    return "A";
  } elseif ($value >= 70) {
    return "B";
  } elseif ($value >= 60) {
    return "C";
  } elseif ($value >= 50) {
    return "D";
  } else {
    return "E";
  } 
  echo "Tidak akan pernah dieksekusi".PHP_EOL;
}
$score = getFinalValue(95);
var_dump($score);

// Return Type Declarations
function tambah(int $first, int $second): int
{
  $total = $first + $second;
  return $total;
}
$result = tambah(10, 10);
var_dump($result);
$result = tambah(100, 10);
var_dump($result);

function nilaiFinal(int $value): string
{
  if ($value >= 80) {
    return "A";
  } elseif ($value >= 70) {
    return "B";
  } elseif ($value >= 60) {
    return "C";
  } elseif ($value >= 50) {
    return "D";
  } else {
    return "E";
  }
  echo "Tidak akan pernah dieksekusi" . PHP_EOL;
}
$score = nilaiFinal(95);
var_dump($score);

// Return Type Declarations
// Sama seperti pada argument, pada return value pun kita bisa mendeklarasikan tipe datanya
// Hal ini selain mempermudah kita ketika membaca tipe data kembalian function, bisa juga digunakan untuk menjaga jangan sampai kita mengembalikan tipe data yang salah di function
// Untuk mendeklarasikan tipe data kembalian function, setelah kurung () kita bisa tambahkan : diikuti tipe data kembaliannya
