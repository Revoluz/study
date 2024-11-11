<?php

$a = 92;
$b = 68; //4
// $a = 72;
// $b = 144; //36 ->72

$a = 18;
$b = 26;
function solution($a, $b)
{
  $num1 = loop($a);
  $num2 = loop($b);
  var_dump($num1);
  $temp = array_intersect($num1, $num2);
  return array_product($temp);
}

function loop($num)
{
  $numbers = [];
  for ($i = 2; 2 <= $num; $i++) {
    if (($num % $i) == 0) {
      $numbers[] = $num / $i;
      $num = $num / $i;
    } else {
      $i++;
    }
  }
  return $numbers;
}
echo solution($a, $b) . PHP_EOL;
