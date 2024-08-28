<?php
require_once __DIR__."/data/Location.php";
use Data\{Location,City,Province,Country};

// $location = new Location(); // error
$city = new City();
$province = new Province();
$province = new Country();
// Abstract Class

// Saat kita membuat class, kita bisa menjadikan sebuah class sebagai abstract class.
// Abstract class artinya, class tersebut tidak bisa dibuat sebagai object secara langsung, hanya bisa diturunkan
// Untuk membuat sebuah class menjadi abstract, kita bisa menggunakan kata kunci abstract sebelum kata kunci class
// Sehingga Abstract Class bisa kita gunakan sebagai kontrak child class
