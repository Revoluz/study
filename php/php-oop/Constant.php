<?php
require_once __DIR__ . "/data/Person.php";
// deffine juga cara membuat constant 
// deklarasi nama const direkomendasikan uppercase semua
define("APPLICATION","Belajar PHP OOP");
const APP_VERSION = "1.0.0";

echo APPLICATION .PHP_EOL;
echo APP_VERSION .PHP_EOL;
echo Person::AUTHOR . PHP_EOL;