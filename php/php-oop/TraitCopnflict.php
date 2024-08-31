<?php
trait A{
  function doA(): void
  {
    echo "a".PHP_EOL;
  }
  function doB(): void
  {
    echo "b" . PHP_EOL;
  }
}

trait B
{
  function doA(): void
  {
    echo "A" . PHP_EOL;
  }
  function doB(): void
  {
    echo "B" . PHP_EOL;
  }
}

class Sample {
  use A,B{
    // gunakan yang A dari pada yang B
    A::doA insteadof B;
    B::doB insteadof A;
  }
}

$sample = new Sample();
// akan error
$sample->doA();
$sample->doB();

// Trait Conflict

// Jika kita menggunakan lebih dari satu trait, lalu terdapat function yang sama di trait tersebut
// Maka hal tersebut akan menyebabkan konflik
// Jika terjadi konflik seperti ini, kita bisa mengatasinya dengan menggunakan kata kunci insteadof
// insteadof yaitu memilih function dari trait mana yang akan di gunakan
