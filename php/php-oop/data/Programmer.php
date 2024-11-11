<?php

class Programmer{
  public string $name;
  public function __construct(string $name){
    $this->name = $name;
  }
}

class BackendProgrammer extends Programmer{
  public string $password;

}
class FrontendProgrammer extends Programmer{

}
class WebProgrammer  {}

class Company {
  // plotymorphism
  // Programmer merupakan tipe data
  // hanya bisa menyimpan class programmer beserta childnya
  // tipe data objek
  public Programmer $programmer; //$programmer bisa berubah ubah nilainya terhadap class class turunanya / class class lain
  // Programmer $programmer digunakan untuk menjaga nilai yang disimpan harus berasal dari class Programmer dan turunannya
}

function sayHelloProgrammer(Programmer $programmer){
  if ($programmer instanceof BackendProgrammer) {
    echo "Hello Backend Programmer $programmer->name" . PHP_EOL;
    
  }elseif ($programmer instanceof FrontendProgrammer) {
    echo "Hello Frontend Programmer $programmer->name" . PHP_EOL;
  }
  // jika elseif($programmer instanceof Programmer) di taruh di urutan pertama maka kondisi akan selalu true
  elseif($programmer instanceof Programmer){
    echo "Hello Programmer $programmer->name".PHP_EOL;

  }
}
// Referensi: Variabel $programmer tidak menyimpan objek itu sendiri, tetapi hanya menyimpan referensi ke lokasi di memori tempat objek tersebut disimpan.
// Polimorfisme: Karena $programmer bertipe Programmer, kita bisa memberikan nilai padanya dengan objek dari kelas Programmer atau kelas turunannya.

// Dalam kode public Programmer $programmer;, variabel $programmer dapat dibilang sebagai "representasi" atau "wadah" untuk objek-objek yang berasal dari kelas Programmer atau kelas turunannya (seperti BackendProgrammer atau FrontendProgrammer).

// Pewarisan berkaitan dengan struktur dan hierarki kelas.
// Polimorfisme berkaitan dengan perilaku objek saat runtime.
// Ketika Anda menggunakan polimorfisme untuk menugaskan objek dari kelas turunan ke variabel yang bertipe kelas induk, Anda tidak hanya mewarisi struktur, tetapi juga mewarisi perilaku dan nilai-nilai yang spesifik untuk objek tersebut.