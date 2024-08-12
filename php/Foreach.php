<?php
$names = ["Ahmad", "Fadhil", "Fanani"];
$person = [
  "first_name" => "Ahmad",
  "middle_name" => "Fadhil",
  "last_name" => "Fanani"
];
echo sizeof($names) . PHP_EOL;
echo count($names) . PHP_EOL;
for ($i = 0; $i < count($names); $i++) {
  echo "Data ke $i = $names[$i]" . PHP_EOL;
}
foreach ($names as $name) {
  echo "Data $name" . PHP_EOL;
}
echo PHP_EOL;

foreach ($person as $value) {
  echo "Data $value" . PHP_EOL;
}
echo PHP_EOL;
// data yang berbentuk map/associative array
foreach ($names as $index=> $name) {
  echo "Data ke $index = $name" . PHP_EOL;
}
echo PHP_EOL;
foreach ($person as $key => $value) {
  echo "$key : $value".PHP_EOL;
}