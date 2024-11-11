<?php

$matches=[];
// $result = (bool)preg_match_all("/fan|fadhil|mad|az/", "Ahmad Fadhil FaNani", $matches);
// case sensitive
$result = preg_match_all("/ni|fadhil|mad|az/","Ahmad Fadhil FaNani",$matches);
// (bool)preg_match_all output akan true karena ada yang match
// preg_match_all output int(2) karena ada 2 kata yang match
var_dump($result);
var_dump($matches);
//  /i incasesensitive
$hasil = preg_replace("/anjing|bangsat/i", "***","dasar lu anjing dan BangSat!");
var_dump($hasil);
// [\s,-] spasi dan -
$results=  preg_split("/[\s,-]/","Eko Kurniawan Khannedy Programer Zaman-Now");
var_dump($results);



//  preg_match ($pattern ,$subject)
// preg_match_all ($pattern ,$subject)
// Digunakan untuk mencari match pattern
// preg_replace ( $pattern , $replacement, $subject)
// Digunakan untuk mereplace semua pattern dengan replacement
// preg_split ( $pattern , $subject)
// Digunakan untuk memotong dengan pattern menjadi array
