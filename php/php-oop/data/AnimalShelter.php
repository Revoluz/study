<?php
namespace Data;
require_once __DIR__."/Animal.php";

interface AnimalShelter{
  function adopt(string $name): Animal;
}
class CatShelter implements AnimalShelter
{
  // return tidak harus mengambalikan animal tetapi bisa juga turunan nya
  public function adopt(string $name): Cat
  {
    $cat = new Cat();
    $cat->name= $name;
    return $cat;
  }
}
class DogShelter implements AnimalShelter{
  public function adopt(string $name): Dog
  {
    $cat = new Dog();
    $cat->name = $name;
    return $cat;
  }
}

// Covariance

// Saat kita meng override function dari parent class, biasanya di child class kita akan membuat function yang sama dengan function yang di parent
// Covariance memungkinkan kita meng override return function yang di parent dengan return value yang lebih spesifik
