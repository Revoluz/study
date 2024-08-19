<?php
//  continue digunakan untuk menghentikan perulangan saat ini, lalu melanjutkan ke perulangan selanjutnya

// cek bilangan ganjil
for ($counter=1; $counter <=100 ; $counter++) { 
  if ($counter % 2 == 0) {
  continue;
  }
  echo "Counter : $counter".PHP_EOL;
}