<?php
require_once __DIR__ . "/data/Student.php";

$student1 = new Student();
$student1->id = "1";
$student1->name = "Fanan";
$student1->value = 100;
$student1->setSample("test");
// (string) memanggile function __toString
$student1(1,2,3,4,5,6,"Fanan",true);

// __invoke() Function

// __invoke() merupakan function yang dieksekusi ketika object yang kita buat dianggap sebagai function
// Misal ketika kita membuat object $student, lalu kita melakukan $student(), maka secara otomatis function __invoke() yang akan dieksekusi
