<?php
$mapFunction = fn(int $value)=>$value * 10; 
$dataResult = array_map($mapFunction, $data);
var_dump($dataResult);
$dataResult = array_map(fn(int $value) => $value / 10, $dataResult);
var_dump($dataResult);