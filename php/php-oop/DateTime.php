<?php

$dateTime = new DateTime();
$dateTime->setDate(1990,1,20);
$dateTime->setTime(10,10,10,1);
var_dump($dateTime);

// menambah 1 tahun
$dateTime->add(new DateInterval("P1Y"));

// mengurangi satu bulan
$minusOneMonth = new DateInterval("P1M");
$minusOneMonth->invert = true;
$dateTime->add($minusOneMonth);

$now = new DateTime();
var_dump($now);
$now->setTimezone(new DateTimeZone("Asia/Jakarta"));
var_dump($now);
// huruf kecil 2 digit huruf besr 4 digit
$string= $now->format("Y-m-d H:i:s");
echo "Waktu saat ini : $string".PHP_EOL;
// DateTime
$date = DateTime::createFromFormat( "Y-m-d H:i:s", "2020-10-23 10:10:10", new DateTimeZone("Asia/Jakarta"));
$dateSalah = DateTime::createFromFormat("Y-m-d H:i:s","salah",new DateTimeZone("Asia/Jakarta")); //false
if ($date) {
 var_dump($date);
} else {
  echo "Format Salah".PHP_EOL;
}

var_dump($date);

// Biasanya dalam bahasa pemrograman sudah disediakan cara untuk memanipulasi data waktu, termasuk di PHP
// Di PHP, kita bisa menggunakan class DateTime untuk memanipulasi data waktu
// Ada banyak sekali function di class DateTime yang bisa kita gunakan untuk memanipulasi data waktu
// DateTime Function
//  DateTime Function
// Keterangan
// setTime($hour, $minute, $second)
// Mengubah waktu DateTime
// setDate($year, $month, $day)
// Mengubah tanggal DateTime
// setTimestamp($unixTimestamp)
// Mengubah unix timestamp DateTime

// DateTimeZone

// Saat kita membuat object DateTime, dia akan secara otomatis membuat waktu saat ini sesuai dengan timezone yang di setting di konfigurasi date.timezone di file php.ini
// Atau kita bisa menggunakan function setTimeZone untuk mengubah timezone DateTime

// Format DateTime

// Kadang kita ingin membuat representasi string dari DateTime yang sudah kita buat
// Hal ini bisa kita lakukan menggunakan function format()
// Function format() menerima argument berupa format string, ini bisa kita gunakan untuk memanipulasi cara kita menampilkan string format waktu
// Untuk detailnya kita bisa lihat di halaman dokumentasi resminya
// https://www.php.net/manual/en/datetime.format.php 

// Parse DateTime

// Selain format DateTime menjadi string, di PHP juga kita bisa melakukan hal sebaliknya, yaitu memparsing string menjadi DateTime sesuai dengan format yang kita mau
// Untuk melakukan itu, kita bisa menggunakan static function createFromFormat() dari class DateTime



// https://www.udemy.com/course/pemrograman-php-pemula-sampai-mahir/learn/lecture/24072598#questions/21127736