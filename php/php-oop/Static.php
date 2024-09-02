<?php

require_once __DIR__."/Helper/MathHelper.php";

use Helper\Mathhelper;

echo MathHelper::$name.PHP_EOL;

// Bisa diubah
MathHelper::$name = "Fanan";
echo MathHelper::$name.PHP_EOL;

$result = Mathhelper::sum(10,10,10,10);

echo "Result : $result".PHP_EOL;

// static Keyword

// Kata kunci static adalah keyword yang bisa kita gunakan untuk membuat properties atau function di class bisa diakses secara langsung tanpa menginstansiasi class terlebih dahulu
// Namun ingat, saat kita buat static properties atau function, secara otomatis hal itu tidak akan berhubungan lagi dengan class instance yang kita buat
// Untuk cara mengakses static properties dan function sama seperti mengakses constant, kita bisa menggunakan operator ::
// static function tidak bisa mengakses function biasa, karena function biasa menempel pada class instance sedangkan static function tidak
