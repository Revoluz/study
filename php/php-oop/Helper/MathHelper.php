<?php

namespace Helper;

class MathHelper{
  static public string $name = "MathHelper";


  static public function sum(int... $numbers): int
  {
    $total = 0;
    foreach ($numbers as $number) {
      $total += $number;
    }
    return $total;
  }
}


// static Keyword

// Kata kunci static adalah keyword yang bisa kita gunakan untuk membuat properties atau function di class bisa diakses secara langsung tanpa menginstansiasi class terlebih dahulu
// Namun ingat, saat kita buat static properties atau function, secara otomatis hal itu tidak akan berhubungan lagi dengan class instance yang kita buat
// Untuk cara mengakses static properties dan function sama seperti mengakses constant, kita bisa menggunakan operator ::
// static function tidak bisa mengakses function biasa, karena function biasa menempel pada class instance sedangkan static function tidak
// jadi jika menggunakan static maka akan selevel dengan constanta

// biasanya digunakan untuk helper