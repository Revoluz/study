<?php
goto a;
// akan di skip
echo "Hello World".PHP_EOL;

a:
echo "Hello A".PHP_EOL;
echo PHP_EOL;
// bisa digunakan untuk loncat / mengakhiri looping
$counter = 1;
while (true) {
  echo "Ini adalah while loop ke-$counter" . PHP_EOL;
  $counter++;
  if ($counter > 10) {
    goto end;
  }
}
end:
echo "End Loop".PHP_EOL;
// Salah satu fitur yang sebenarnya jarang sekali digunakan di PHP adalah goto operator
// Kenapa jarang digunakan karena jika terlalu banyak menggunakan goto operator, kode program aplikasinya akan mudah membingungkan yang membaca kode nya
// goto adalah fitur dimana kita bisa loncat ke kode program sesuai dengan keinginan kita
// Agar goto bisa loncat ke kode program, kita harus membuat label di php dengan menggunakan nama label lalu diakhiri : (colon)
// Label a: dalam kode PHP yang Anda tunjukkan berfungsi sebagai penanda atau titik tujuan untuk pernyataan goto.
// Jika a: berdiri sendiri tanpa pernyataan goto dalam kode PHP, maka label tersebut tidak akan memiliki fungsi apa pun.


