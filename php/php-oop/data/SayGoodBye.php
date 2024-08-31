<?php
namespace Data\Traits;

trait SayGoodBye{
  public function goodBye(?string $name): void
  {
    if (is_null($name)) {
      echo "Good bye".PHP_EOL;
    } else {
      echo "Good bye $name" . PHP_EOL;
    }
    
  }
}
trait SayHello
{
  public function hello(?string $name): void
  {
    if (is_null($name)) {
      echo "Hello" . PHP_EOL;
    } else {
      echo "Hello $name" . PHP_EOL;
    }
  }
}
trait HasName{
  public string $name;
}
trait CanRun
{
  public abstract function run(): void;
}

class Person
{
  use SayGoodBye,SayHello,HasName,CanRun{
// Trait change Visibility Override
    SayHello as private;
  }
  public function run(): void
  {
    echo "Person $this->name is running".PHP_EOL;
  }

  // trait overriding
  public function goodBye(?string $name): void
  {
    echo "Good bye in Person Override trait".PHP_EOL;
  }
  public function hello(?string $name): void
  {
    echo "Hello in Person Override trait" . PHP_EOL;
  }

}

// apa yang bisa di lakukan abstrac class bisa dilakukan di trait

// Trait

// Selain class dan interface, di PHP terdapat feature lain bernama trait
// Trait mirip dengan abstract class, kita bisa membuat konkrit function atau abstract function
// Yang membedakan adalah, di trait bisa kita tambahkan ke dalam class lebih dari satu
// Trait mirip seperti ekstension, dimana kita bisa menambahkan konkrit function ke dalam class dengan trait
// Secara sederhana trait adalah digunakan untuk menyimpan function-function yang bisa digunakan ulang di beberapa class
// Untuk menggunakan trait di class, kita bisa menggunakan kata kunci use
// trait ketika di use bisa turun ke child class nya

// Trait Overriding

// Jika sebuah class memiliki parent class yang memiliki function yang sama dengan function di trait, maka secara otomatis trait akan meng-override function tersebut
// Namun jika kita membuat function yang sama di class nya, maka secara otomatis kita akan meng-override function di trait
// Sehingga posisinya seperti ini ParentClass =override by=> Trait =override by=> ChildClass

// Trait change Visibility Override

// Selain melakukan override function di class, kita juga bisa melakukan override visibility function yang terdapat di trait
// Namun untuk melakukan ini tidak perlu membuat function baru di class, kita bisa gunakan secara sederhana ketika menggunakan trait nya
