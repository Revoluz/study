<?php
require_once __DIR__ . "/data/Student.php";

$student1 = new Student();
$student1->id = "1";
$student1->name = "Fanan";
$student1->value = 100;
$student1->setSample("test");
// (string) memanggile function __toString
$string = (string) $student1;
echo $string.PHP_EOL;