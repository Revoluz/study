<?php

class Data1 {
  var string $first = "First";
  public string $second = "Second";
  private string $thrid ="thrid";
  protected string $forth = "forth";

}
// iterator manual
$data = new Data1();
// foreach akan langsung memangil function getIterator
foreach ($data as $property => $value) {
  echo "$property : $value" . PHP_EOL;
}
// IteratorAggregate merupakan interface bawaan dari php
class Data2 implements IteratorAggregate
{
  var string $first = "First";
  public string $second = "Second";
  private string $thrid = "thrid";
  protected string $forth = "forth";
  // digunakan untuk mengamankan data di array jika data ada data sensitif 
  // manual iteration handle 
  // public function getIterator(): Traversable
  // {
  //   $array = [
  //     "first" => $this->first,
  //     "second" => $this->second,
  //     "thrid" => $this->thrid,
  //     "forth" => $this->forth,
  //   ];
  //   $iterator = new ArrayIterator($array);
  //   return $iterator;
  // }
  // menggunakan yield generator
  public function getIterator(): Traversable
  {
      yield "first" => $this->first;
      yield "second" => $this->second;
      yield "thrid" => $this->thrid;
      yield "forth" => $this->forth;

  }
}

// iterator manual
$data2 = new Data2();
// foreach akan langsung memangil function getIterator
foreach ($data2 as $property => $value) {
  echo "$property : $value" . PHP_EOL;
}
// Object Iteration

// Saat kita membuat object dari sebuah class, kita bisa melakukan iterasi ke semua properties yang terdapat di object tersebut menggunakan foreach
// Hal ini mempermudah kita saat ingin mengakses semua properties yang ada di object
// Secara default, hanya properties yang public yang bisa diakses oleh foreach


// Iterator

// Sebelumnya kita melakukan iterasi data di properties secara otomatis menggunakan foreach
// Jika kita ingin menangani hal ini secara manual, kita bisa menggunakan Iterator
// Iterator adalah interface yang digunakan untuk melakukan iterasi, namun membuat Iterator secara manual lumayan cukup ribet, oleh karena itu sekarang kita akan gunakan ArrayIterator, yaitu iterator yang menggunakan array sebagai data iterasi nya
// Dan agar class kita bisa di iterasi secara manual, kita bisa menggunakan interface IteratorAggregate, disana kita hanya butuh meng-override function getIterator() yang mengembalikan data Iterator
