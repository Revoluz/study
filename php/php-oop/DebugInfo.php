<?php
require_once __DIR__ . "/data/Student.php";

$student1 = new Student();
$student1->id = "1";
$student1->name = "Fanan";
$student1->value = 100;
$student1->setSample("test");

// menjalankan debug info dan mengoverride default var_dump()
var_dump($student1);