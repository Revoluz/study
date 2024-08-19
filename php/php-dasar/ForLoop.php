<?php
// infinit for loop
// for (;  ; ) { 
//   echo "Ini adalah for loop".PHP_EOL;
// }
// di loop dulu baru di naikan/increment
// (init statement,condition,post statement)
for ($counter = 1; $counter <= 10 ; $counter++) { 
  echo "Ini adalah for loop ke-$counter".PHP_EOL;
  
}
echo PHP_EOL;
for ($counter = 10; $counter >= 1; $counter--) {
  echo "Ini adalah for loop ke-$counter" . PHP_EOL;
}
// syntax alternatif
for ($counter = 1; $counter <= 10; $counter++) :
  echo "Ini adalah for loop ke-$counter" . PHP_EOL;
endfor;
echo PHP_EOL;
for ($counter = 10; $counter >= 1; $counter--) :
  echo "Ini adalah for loop ke-$counter" . PHP_EOL;
endfor;
