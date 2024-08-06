<?php
// Operator penugasan di PHP sama seperti bahasa pemrograman lain, yaitu dengan menggunakan karakter = (sama dengan)
// Operator penugasan sudah sering kita gunakan, terutama ketika mengubah value sebuah variable
// Namun selain hal itu, operasi penugasan juga bisa digunakan untuk operasi aritmatika

// $a += $b || $a = $a + $b;
// $a -= $b || $a = $a - $b;
// $a *= $b || $a = $a * $b;
// $a /= $b || $a = $a / $b;
// $a %= $b || $a = $a % $b;
$total =0;
$fruit = 5000;
$chicken = 10000;
$orangeJuice = 5000;

// cara panjang
// $total = $total + $fruit;
// $total = $total + $chicken;
// $total = $total + $orangeJuice;
// disingkat
$total += $fruit;
$total += $chicken;
$total += $orangeJuice;
var_dump($total);