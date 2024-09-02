<?php
class ConstructPerson
{
  // const tidak bisa diubah
  // constant nempelnya di dalam class bukan di dalam object
  const AUTHOR = "PROGRAMMER ZAMAN NOW";
  var string $name;
  // tanda ? yitu nullabel default value / boleh kosong
  var ?string $address = null;
  // default value
  // var string $country merupakan properties
  var int $age ;
  var string $country = "Indonesia";

  function __construct(string $name, ?string $address,$age)
  {
    $this->name = $name;
    $this->age = $age;
    $this->address = $address;
  }

  function sayHello(?string $name)
  {
    if (is_null($name)) {
      echo "Hi,my name is $this->name" . PHP_EOL;
    } else {
      echo "Hi $name,my name is $this->name" . PHP_EOL;
    }
  }
  function info()
  {
    echo "Author : " . self::AUTHOR . PHP_EOL;
  }
  // function __destruct(){
  //   echo "Object person $this->name is destroyed".PHP_EOL;
  // }
}
// Saat kita membuat Object, maka kita seperti memanggil sebuah function, karena kita menggunakan kurung ()
// Di dalam class PHP, kita bisa membuat constructor, constructor adalah function  yang akan dipanggil saat pertama kali Object dibuat.
// Mirip seperti di function, kita bisa memberi parameter pada constructor
// Nama constructor di PHP haruslah __construct()