<?php

class Zero 
{
  private array $properties= [];
  // public string $firstName = "Fanan";
  public function __get($name)  {
    
    return $this->properties[$name];
  }
  public function __set($name, $value){
    $this->properties[$name]= $value;
  }
  public function __isset($name): bool
  {
    
    return isset($this->properties[$name]);
  }
  public function __unset($name){
    unset($this->properties[$name]);
  }
  public function __call($name, $arguments){
    // $argument otomatis menjadi array ...$argument
    $join = join(",",$arguments);
    echo "Call function $name with arguments $join". PHP_EOL;
  }
  public static function __callStatic($name, $arguments)
  {
    // $argument otomatis menjadi array ...$argument
    $join = join(",", $arguments);
    echo "Call static function $name with arguments $join" . PHP_EOL;
  }
}

$zero = new Zero();
$zero->firstName = "Ahmad";
$zero->middleName = "Fadhil";
$zero->lastName = "Fanani";


$zero->firstName= "Fanan";
echo "First Name : $zero->firstName".PHP_EOL;
echo "Middle Name : $zero->middleName".PHP_EOL;
echo "Last Name : $zero->lastName" . PHP_EOL;
var_dump($zero);
// isset($zero->firstName);
// unset($zero->firstName);


// function overloading
$zero->sayHello();
$zero::sayHello();
$zero->sayHello("Fanan", "Fadhil");
$zero::sayHello("Ahmad", "Fadhil");


// Overloading

// Overloading adalah kemampuan secara dinamis membuat properties atau function
// Ini mirip meta programming di bahasa pemrograman lain seperti Ruby
// Namun ini berbeda dengan function overloading di bahasa pemrograman lain seperti Java
// Overloading ini erat kaitannya dengan magic function yang sebelumnya sudah kita bahas

// Properties Overloading

// Saat kita mengakses properties, maka secara otomatis properties akan diakses
// Namun jika ternyata properties tersebut tidak tersedia di objectnya, maka PHP tidak secara otomatis menjadikan itu error
// PHP akan melakukan fallback ke magic function
// Dengan demikian kita bisa membuat properties secara dinamis dengan memanfaatkan magic function tersebut
// Ada beberapa magic function yang bisa kita gunakan untuk properties overloading

// Magic Function untuk Properties Overloading
//  Magic Function
// __set($name, $value) : void
// Dieksekusi ketika mengubah properties yang tidak tersedia
// __get($name) : mixed
// Dieksekusi ketika mengakses properties yang tidak tersedia
// __isset ($name ) : bool
// Dieksekusi ketika mengecek isset() atau empty() properties yang tidak tersedia
// __unset($name) : void
// Dieksekusi ketika menggunakan unset() properties yang tidak tersedia
