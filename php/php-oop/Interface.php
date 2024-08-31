<?php

require_once __DIR__."/data/Car.php";

use Data\{Avanza,Car};

$car = new Avanza();
$car->drive();

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

// perbedaan dengan interface yaitu trait bisa deklarasi metod beserta blok kodenya dan proprties juga
// Deklarasi Metode dan Properti: Trait dapat mendeklarasikan baik metode (dengan atau tanpa implementasi) maupun properti. Ini memberikan fleksibilitas yang lebih besar dalam berbagi kode.
// Implementasi Metode: Trait dapat berisi implementasi langsung untuk metode-metode yang didefinisikannya. Ini berarti trait tidak hanya mendeklarasikan "apa yang harus dilakukan", tetapi juga "bagaimana melakukannya".
// Penggunaan: Trait digunakan untuk menyusun kode yang dapat digunakan kembali dalam beberapa kelas. Ini memungkinkan kita untuk menghindari duplikasi kode dan membuat kode lebih modular.