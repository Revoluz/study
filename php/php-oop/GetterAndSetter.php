<?php
require_once __DIR__ ."/data/Category.php";
$category = new Category();
$category->setName("Handphone");
$category->setExpensive(true);

echo "Name : {$category->getName()}" . PHP_EOL;
echo "Expensive : {$category->isExpensive()}". PHP_EOL;
