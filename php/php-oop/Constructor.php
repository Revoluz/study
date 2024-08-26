<?php
require_once __DIR__."/data/ConstructPerson.php";
// wajib menambahkan parameter
$fanan = new ConstructPerson("Fanan","Jogja",18);

var_dump($fanan);



// Saat kita membuat Object, maka kita seperti memanggil sebuah function, karena kita menggunakan kurung ()
// Di dalam class PHP, kita bisa membuat constructor, constructor adalah function  yang akan dipanggil saat pertama kali Object dibuat.
// Mirip seperti di function, kita bisa memberi parameter pada constructor
// Nama constructor di PHP haruslah __construct()
