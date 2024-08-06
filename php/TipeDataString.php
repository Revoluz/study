<?php

echo 'Name : ';
echo 'Ahmad Fadhil Fanani ';
echo "\n";
echo "Nama : ";
echo "Ahmad\t Fadhil\t Fanani\n";
// Heredoc adalah fitur untuk membuat String yang panjang, sehingga kita tidak perlu manual melakukan enter, tab dan yang lain-lain secara manual 
echo <<< Fanan
Ini adalah contoh string yang sangat
panjang, dan juga gak perlu ngetik ENTER secara
manual, "bisa quote" juga
Fanan;
// Nowdoc mirip seperti Heredoc, yang membedakan adalah pada Nowdoc tidak memiliki kemampuan parsing seperti di Heredoc atau Double Quote. Masalah parsing akan kita bahas di materi Manipulasi String
echo <<< 'Fanan'
Ini adalah contoh string yang sangat
panjang, dan juga gak perlu ngetik ENTER secara
manual, "bisa quote" juga
Fanan;
