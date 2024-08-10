<?php
$nilai = "C";
// if ($nilai == "A") {
//   echo "Anda lulus dengan sangat baik";
// } elseif ($nilai == "B" || $nilai == "C") {
//   echo "Anda lulus" . PHP_EOL;
// } elseif ($nilai == "D") {
//   echo "Anda tidak lulus";
// } else {
//   echo "Mungkin Anda salah jurusan" . PHP_EOL;
// }
switch ($nilai) {
  case 'A':
    echo "Anda lulus dengan sangat baik" . PHP_EOL;
    break;
  case 'B':
  case 'C':
    echo "Anda lulus" . PHP_EOL;
    break;
  case 'D':
    echo "Anda tidak lulus" . PHP_EOL;
    break;
  default:
    echo "Mungkin Anda salah jurusan" . PHP_EOL;
    break;
}
//syntax alternatif (tidak direkomendasikan)
// Sama seperti if statement, switch statement juga bisa tanpa menggunakan {} (kurung kurawal)
// Namun diakhir switch statement, kita harus menambahkan kata kunci endswitch

switch ($nilai) :
  case 'A':
    echo "Anda lulus dengan sangat baik" . PHP_EOL;
    break;
  case 'B':
  case 'C':
    echo "Anda lulus" . PHP_EOL;
    break;
  case 'D':
    echo "Anda tidak lulus" . PHP_EOL;
    break;
  default:
    echo "Mungkin Anda salah jurusan" . PHP_EOL;
    break;
  endswitch;
