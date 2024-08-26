<?php
// cara membuat object
require_once __DIR__ . "/data/Person.php";
require_once __DIR__ . "/data/ConstructPerson.php";

$person = new Person();
$person->name = "Fanan";
// $person->address = "Jogja";
$person->country = "indonesia";
var_dump($person);
echo "Name : $person->name". PHP_EOL;
echo "Address : $person->address".PHP_EOL;
echo "Country : $person->country" . PHP_EOL;
$person->sayHello("Budi");

echo PHP_EOL;

$person2 = new Person();
$person2->name = "Budi";
$person2->address = "Solo";
echo "Name : $person2->name" . PHP_EOL;
echo "Address : $person2->address" . PHP_EOL;
echo "Country : $person2->country" . PHP_EOL;
$person->sayHello(null);
$person->info();

