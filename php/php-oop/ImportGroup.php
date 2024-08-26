<?php
require_once __DIR__."/data/ConflictNamespace.php";
require_once __DIR__ . "/data/Helper.php";

use Data\One\{Conflict as Conflict1, Dummy, Sample};
  use Data\Two\Conflict as Conflict2;
use function Helper\{helpMe as help};
use const Helper\APPLICATION as APP;


  $conflict1 = new Conflict1();
  $conflict2 = new Conflict2();
help();
echo APP . PHP_EOL;

  // use Keyword

  // Sebelumnya kita sudah tahu bahwa untuk menggunakan class, function atau constant di namespace kita perlu menyebutkan nama namespace nya di awal
  // Jika terlalu sering menggunakan class, function atau constant yang sama, maka terlalu banyak duplikasi dengan menyebut namespace yang sama berkali-kali
  // Hal ini bisa kita hindari dengan cara mengimport class, function atau constant tersebut dengan menggunakan kata kunci use

  // Alias
// Saat kita menggunakan use, artinya kita tidak perlu lagi menggunakan nama namespace diawal class ketika kita ingin membuat class tersebut
// Namun bagaimana jika kita ternyata nama class nya sama?
// Untungnya PHP memiliki fitur yang namanya alias
// Alias adalah kemampuan membuat nama lain dari class, function atau constant yang ada
// Kita bisa menggunakan kata kunci as setelah melakukan use
