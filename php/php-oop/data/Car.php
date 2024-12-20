<?php

namespace Data;

interface HasBrand{
  function getBrand(): string;
}
interface isMaintenance
{
  function isMaintenance(): bool;
  

}
// interface inheritance
// interface Car extends HasBrand,isMaintenance
interface Car extends HasBrand
{
  function drive(): void;
  function getTire(): int;
}

// class Avanza extends Country implements Car,x,y{
class Avanza implements Car,isMaintenance
{
  public function drive(): void
  {
    echo "Drive Avanza" . PHP_EOL;
  }
  public function getTire(): int
  {
    return 4;
  }
  public function getBrand(): string
  {
    return "Toyota";
  }
  public function isMaintenance(): bool
  {
    return true;
  }

}

// Interface

// Sebelumnya kita sudah tahu bahwa abstract class bisa kita gunakan sebagai kontrak untuk class child nya.
// Namun sebenarnya yang lebih tepat untuk kontrak adalah Interface
// Jangan salah sangka bahwa Interface disini bukanlah User Interface
// Interface mirip seperti abstract class, yang membedakan adalah di Interface, semua method otomatis abstract, tidak memiliki block
// Di interface kita tidak boleh memiliki properties, kita hanya boleh memiliki constant 
// Untuk mewariskan interface, kita tidak menggunakan kata kunci extends, melainkan implements
// Dan berbeda dengan class, kita bisa implements lebih dari satu interface

// Definisi: Sebuah interface adalah kontrak yang mendefinisikan sekumpulan metode yang harus diimplementasikan oleh kelas yang mengimplementasikan interface tersebut.
// Ciri-ciri:
// Hanya berisi deklarasi metode, tanpa implementasi.
// Semua metode dalam interface bersifat public dan abstract secara otomatis.
// Sebuah kelas bisa mengimplementasikan banyak interface.
// Tujuan:
// Mendefiniskan perilaku yang sama untuk kelas-kelas yang berbeda.
// Memungkinkan polimorfisme pada tingkat yang lebih tinggi.
// Memisahkan antarmuka dari implementasi.

// Interface Inheritance

// Sebelumnya kita sudah tahu kalo di PHP, child class hanya bisa punya 1 class parent
// Namun berbeda dengan interface, sebuah child class bisa implement lebih dari 1 interface
// Bahkan interface pun bisa implement interface lain, bisa lebih dari 1. Namun jika interface ingin mewarisi interface lain, kita menggunakan kata kunci extends, bukan implements
