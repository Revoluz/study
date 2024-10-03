<?php
class Student
{
  public string $id;
  public string $name;
  public int $value;
  private string $sample;
  public function setSample(string $sample): void
  {
    $this->sample = $sample;
  }
  public function __clone()
  {
    // alur
    // $student1 => clone $student2 => $studnet-> __clone()
    unset($this->id);
    unset($this->sample);
  }
  public function __tostring(): string
  {
    return "Student id:$this->id, name:$this->name, value:$this->value";
  }
  public function __invoke(...$arguments): void
  {
    $join = join(",", $arguments);
    echo "Invoke student with arguments $join".PHP_EOL;
  }
  public function __debugInfo()
  {
    return [
      "id"=>$this->id,
      "name"=>$this->name,
      "value"=>$this->value,
      "sample"=>$this->sample,
      "author" => "Fanan",  
    ];
  }
}
// Magic Function

// Magic function adalah function-function yang sudah ditentukan kegunaannya di PHP
// Kita tidak bisa membuat function tersebut, kecuali memang sudah ditentukan kegunaannya
// Sebelumnya kita sudah membahas beberapa magic function, seperti __construct() sebagai constructor, __destruct() sebagai destructor, dan __clone() sebagai object cloning
// Masih banyak magic function lainnya, kita bisa melihatnya di link berikut : https://www.php.net/manual/en/language.oop5.magic.php 
// magic function 

// __toString() Function diawali dengan __name()

// __toString() function merupakan salah satu magic function yang digunakan sebagai representasi string sebuah object
// Jika misal kita ingin membuat string dari object kita, kita bisa membuat function __toString()

