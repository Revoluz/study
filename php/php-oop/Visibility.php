<?php

require_once __DIR__ . "/data/Product.php";

$product = new Product("Apple",2000) ;
// echo $product->name . PHP_EOL; //error tidak bisa diakses berlaku di private dan protected

echo $product->getName(). PHP_EOL;
echo $product->getPrice() . PHP_EOL;

$dummy = new ProductDummmy("Dummy",100);
$dummy->info();

// Visibility

// Visibility / Access modifier adalah kemampuan properties, function dan constant dapat diakses dari mana saja
// Secara default, properties, function dan constant yang kita buat di dalam class bisa diakses dari mana saja, atau artinya dia adalah public
// Selain public, masih ada beberapa visibility lainnya
// Secara default kata kunci var untuk properties adalah sifatnya public

// Access Level

//  Modifier

// public
// Class
// Y
// Subclass
// Y
// World
// Y

// protected
// Class
// Y
// Subclass
// Y
// World
// N

// private
// Class
// Y
// Subclass
// N
// World
// N
