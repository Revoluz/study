<?php
$nilai = 10;
$absen = 90;

if($nilai >= 80 && $absen >= 80){
  echo "Nilai Anda A".PHP_EOL;
}else if($nilai >= 70 && $absen >= 70){
  echo "Nilai Anda B" . PHP_EOL;
}elseif ($nilai >= 60 && $absen >= 60) {
  echo "Nilai Anda C" . PHP_EOL;
} elseif ($nilai >= 50 && $absen >= 50) {
  echo "Nilai Anda D" . PHP_EOL;
} else {
  echo "Nilai Anda E" . PHP_EOL;
}
// Selain menggunakan {} (kurung kurawal), PHP juga menyediakan syntax alternatif untuk menggunakan if, yaitu dengan menggunakan : (titik dua)
// Namun untuk menggunakan ini, kita harus menggunakan kata kunci endif diakhir if statement
if ($nilai >= 80 && $absen >= 80) :
  echo "Nilai Anda A" . PHP_EOL;
 elseif ($nilai >= 70 && $absen >= 70) :
  echo "Nilai Anda B" . PHP_EOL;
 elseif ($nilai >= 60 && $absen >= 60) :
  echo "Nilai Anda C" . PHP_EOL;
 elseif ($nilai >= 50 && $absen >= 50) :
  echo "Nilai Anda D" . PHP_EOL;
 else :
  echo "Nilai Anda E" . PHP_EOL;
 endif;