<?php

// $a = 92;
// $b = 68; //4
$a = 72;
$b = 144; //36 ->72


function solution($a, $b)
{
  $num1 = loop($a);
  $num2 = loop($b);
  $temp = array_intersect($num1, $num2);
  return array_product($temp);
}

function loop($num)
{
  $numbers = [];
  for ($i = 2; $i <= $num; $i) {
    if (($num % $i) == 0) {
      $numbers[] =  $i;
      $num = $num / $i;
    } else {
      $i++;
    }
  }
  return $numbers;
}
echo solution($a,$b).PHP_EOL;