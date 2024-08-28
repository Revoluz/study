<?php

class Manager{
  var string $name;
  var string $title;
  // dikasih default value pada function construct agar tidak error pada saat overriding function nya
  public function __construct(string $name= " ", string $title="Manager"){
    $this->name = $name;
    $this->title = $title;
  }
  function sayHello(?string $name): void // void adalah function yang tidak mengembalikan value
  {
    echo "Hi $name, my name is Manager $this->name" . PHP_EOL;
  }
}
class VicePresident extends Manager{
  public function __construct(string $name = " ", string $title="Manager"){
    // tidak wajib ,tetapi direkomendasikan untuk memanggil parent construct saat overiding parent construnct
    // https://www.udemy.com/course/pemrograman-php-pemula-sampai-mahir/learn/lecture/24072522#questions
    // parent::__construct($name,"VP");
  }
  // tidak direkomedasikan ketika melakukan overiding function biasa(bukan construnctor) dari parent classnya menghapus function argument
  function sayHello(?string $name): void // void adalah function yang tidak mengembalikan value
  {
    echo "Hi $name, my name is Vice President $this->name" . PHP_EOL;
  }

}
// Function sayHello termasuk function overloading
// Function overriding adalah kemampuan mendeklarasikan ulang function di child class, yang sudah ada di parent class
// Saat kita melakukan proses overriding tersebut, secara otomatis ketika kita membuat object dari class child, function yang di class parent tidak bisa diakses lagi

// Inheritance atau pewarisan adalah kemampuan untuk menurunkan sebuah class ke class lain
// Dalam artian, kita bisa membuat class Parent dan class Child
// Class Child, hanya bisa punya satu class Parent, namun satu class Parent bisa punya banyak class Child
// Saat sebuah class diturunkan, maka semua properties dan function yang ada di class Parent, secara otomatis akan dimiliki oleh class Child
// Untuk melakukan pewarisan, di class Child, kita harus menggunakan kata kunci extends lalu diikuti dengan nama class parent ny


// parent Keyword
// Kadang kita ingin mengakses function yang terdapat di class parent yang sudah terlanjur kita override di class child
// Untuk mengakses function milik class parent, kita bisa menggunakan kata kunci parent
// Sederhananya, parent digunakan untuk mengakses class parent

// Constructor Overriding
// Karena constructor sama seperti function, maka constructor-pun bisa kita deklarasikan ulang di class Child nya
// Sebenarnya di PHP, kita bisa meng-override function dengan arguments yang berbeda, namun sangat tidak disarankan
// Jika kita melakukan override function dengan arguments berbeda, maka PHP akan menampilkan WARNING
// Namun berbeda dengan constructor overriding, kita boleh meng-override dengan mengubah arguments nya, namun direkomendasikan untuk memanggil parent constructor
