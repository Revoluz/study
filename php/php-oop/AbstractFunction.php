<?php 

require_once __DIR__."/data/Animal.php";
use Data\{Animal,Cat,Dog};
$cat = new Cat();
$cat->name = "meow";
$cat->run();

$dog = new Dog();
$dog->name = "Guk";
$dog->run();