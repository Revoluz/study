<?php
class Person{
  // const tidak bisa diubah
  // constant nempelnya di dalam class bukan di dalam object
  const AUTHOR = "PROGRAMMER ZAMAN NOW";
  var string $name;
  // nullabel default value / boleh kosong
  var ?string $address = null;
  // default value
  // var string $country merupakan properties
  var string $country = "Indonesia";

  function sayHello(?string $name){
    if (is_null($name)) {
      echo "Hi,my name is $this->name" . PHP_EOL;
    } else {
      echo "Hi $name,my name is $this->name".PHP_EOL;
    }
  }
  function info(){
    // mengakses constant di classnya sendiri / class saat ini mirip seperti $this tetapi ini untuk constant menggunakan self
    echo "Author : ".self::AUTHOR.PHP_EOL;
  }
}
// Properties Type Declaration
// var string $name;
// tidak menggunakan Properties Type Declaration tidak error
// var $name;
// Fields / Properties / Attributes adalah data yang bisa kita sisipkan di dalam Object
// Namun sebelum kita bisa memasukkan data di fields, kita harus mendeklarasikan data apa aja yang dimiliki object tersebut di dalam deklarasi class-nya
// Membuat field sama seperti membuat variable, namun ditempatkan di block class, namun diawali dengan kata kunci var
