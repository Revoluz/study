<?php

$gender = "PRIA";
$hi = null;
if ($gender == "PRIA") {
  $hi = "Hi bro!";
} else {
  $hi = "Hi nona!";
}
echo $hi . PHP_EOL;

// Ternary Operator
$hi = $gender == "PRIA" ? "Hi bro" : "Hi nona";
echo $hi . PHP_EOL;
