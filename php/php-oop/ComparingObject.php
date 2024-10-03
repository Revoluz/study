<?php

require_once __DIR__ . "/data/Student.php";

$student1 = new Student();
$student1->id = "1";
$student1->name = "Fanan";
$student1->value = 100;
$student1->setSample("test");


$student2 = new Student();
$student2->id = "1";
$student2->name = "Fanan";
$student2->value = 100;
$student2->setSample("test");

var_dump($student1 == $student2); // nilai properti
var_dump($student1 === $student2); // berdasarkan alamat object 
var_dump($student1 === $student1); // berdasarkan alamat object 