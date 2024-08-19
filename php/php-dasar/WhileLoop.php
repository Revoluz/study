<?php
// while loop tidak ada init statement dan post statement jadi kita harus membuatnya sendiri
$counter = 1;
while ($counter <= 10) {
  echo "Ini adalah while loop ke-$counter" . PHP_EOL;
  $counter++;
}
// syntax alternatif (tidak direkomendasikan)
$counter = 1;

while ($counter <= 10) :
  echo "Ini adalah while loop ke-$counter" . PHP_EOL;
  $counter++;
endwhile;