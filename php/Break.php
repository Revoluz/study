<?php
// Pada switch statement, kita sudah mengenal kata kunci break, yaitu untuk menghentikan case dalam switch
// Sama dengan pada perulangan, break juga digunakan untuk menghentikan seluruh perulangan.

$counter = 1;
while (true) {
  echo "Ini adalah while loop ke-$counter" . PHP_EOL;
  $counter++;
  if ($counter > 10) {
    break;
  }
}
