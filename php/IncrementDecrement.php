<?php
$a = 10;
$a++;
// (10+1)
$c =10;
$b = $c++;
// dikasih ke b dulu lalu ditambah satu/dinaikan $c 
// 10 = 10+1
// 10 = 11
var_dump($b);
var_dump($c);

$c = 10;
$b = ++$c;
// 11 = 11
// $c ditambah satu dulu baru di kasi ke $b
var_dump($b);
var_dump($c);
