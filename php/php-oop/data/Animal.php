<?php

namespace Data;



abstract class Animal{
  public string $name;
  abstract public function run(): void; // tidak usah ditutup
  abstract public function eat(AnimalFood $animalFood): void;
}
class Cat extends Animal{
  public function run(): void{
    echo "Cat $this->name is running".PHP_EOL;
  }
   public function eat(AnimalFood $animalFood): void{
    echo "Cat is eating".PHP_EOL;
   }
  
}
class Dog extends Animal
{
  public function run(): void
  {
    echo "Dog $this->name is running" . PHP_EOL;
  }
  // contoh Contravariance yaitu food sedangkan parentnya animalfood
  public function eat(Food $food): void
  {
    echo "Dog is eating" . PHP_EOL;
  }
}
// Abstract Function

// Saat kita membuat class yang abstract, kita bisa membuat abstract function juga di dalam class abstract tersebut
// Saat kita membuat sebuah abstract function, kita tidak boleh membuat block function untuk function tersebut
// Artinya, abstract function wajib di override di class child
// Abstract function tidak boleh memiliki access modifier private
// hanya boleh public dan protected

// Contravariance

// Sedangkan contravariance adalah memperbolehkan sebuah child class untuk membuat function argument yang lebih tidak spesifik dibandingkan parent nya
