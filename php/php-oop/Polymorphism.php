<?php

require_once __DIR__ . "/data/Programmer.php";

$company = new Company();

var_dump($company);
$company->programmer = new Programmer("Fanan");
var_dump($company);
// object BackendProgrammer dan properti dan function nya di simpan di variable $programmer di dalam object company
$company->programmer = new BackendProgrammer("Fanan");
var_dump($company);
$company->programmer = new FrontendProgrammer("Fanan");
var_dump($company->programmer->name);
var_dump($company->programmer->name);


sayHelloProgrammer(new Programmer("Fanan"));
sayHelloProgrammer(new BackendProgrammer("Fanan"));
sayHelloProgrammer(new FrontendProgrammer("Fanan"));

// Polymorphism
// Polymorphism berasal dari bahasa Yunani yang berarti banyak bentuk.
// Dalam OOP, Polymorphism adalah kemampuan sebuah object berubah bentuk menjadi bentuk lain
// Polymorphism erat hubungannya dengan Inheritance
// bisa memakai semua bentuk objek turunannya

// Ini yang terjadi secara internal:

// Pembuatan Objek:

// new BackendProgrammer("Fanan") menciptakan sebuah objek baru dari kelas BackendProgrammer. Objek ini memiliki semua properti dan metode yang diwarisi dari kelas Programmer, serta properti dan metode spesifiknya sendiri.
// Penugasan Referensi:

// Objek BackendProgrammer yang baru saja dibuat ini tidak disalin secara keseluruhan ke dalam variabel $programmer. Sebaliknya, variabel $programmer menyimpan referensi ke objek tersebut. Artinya, $programmer menunjuk ke lokasi di memori tempat objek BackendProgrammer disimpan.
// Penyimpanan dalam Objek Company:

// Referensi ini kemudian disimpan dalam properti $programmer dari objek Company. Jadi, di dalam objek Company, properti $programmer tidak menyimpan data objek secara langsung, melainkan hanya "alamat" atau "pointer" ke objek tersebut.

//  BackendProgrammer beserta semua properti dan metodenya secara efektif "disimpan" dalam variabel $programmer di dalam objek Company. Namun, yang sebenarnya disimpan adalah referensi ke objek tersebut, bukan salinannya.
