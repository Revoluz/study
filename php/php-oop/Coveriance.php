<?php

require_once __DIR__ . "/data/Food.php";
require_once __DIR__ . "/data/Animal.php";
require_once __DIR__ . "/data/AnimalShelter.php";

$catShelter = new \Data\CatShelter();
$cat = $catShelter->adopt("Luna");
var_dump($cat);
echo $cat->run();
$cat->eat(new \Data\AnimalFood());

$dogShelter = new \Data\DogShelter();
$dog = $dogShelter->adopt("Bruno");
$dog->eat(new \Data\Food());
// Contravariance

// Sedangkan contravariance adalah memperbolehkan sebuah child class untuk membuat function argument yang lebih tidak spesifik dibandingkan parent nya
