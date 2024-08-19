<?php
//Tipe data integer
echo "Decimal : ";
var_dump(1234);
echo "Octal : ";
var_dump(0123);
echo "Hexadecimal : ";
var_dump(0x1A);
echo "Binary : ";
var_dump(0b101111);
echo "Underscore di Number : ";
var_dump(1_234_211); // agar gampang dibaca

// Tipe data Float   
echo "Floating Point : ";
var_dump(1.234);
echo "Floating Point dengan E notation Plus (1.2 x 1000) : ";
var_dump(1.2e3);
echo "Floating Point dengan E notation Minus (7x0.001) : ";
var_dump(7e-3);
echo "Underscore di Floating Point : ";
var_dump(1_234.567);

//Integer overflow / melebihi batas yang ditampung integer
// Secara default, kapasitas integer di PHP ada batasnya, 2147483647 untuk sistem operasi 32 bit, dan 9223372036854775807 untuk sistem operasi 64 bit
// Jika kita membuat number integer yang melebihi nilai tersebut, maka secara otomatis tipe numbernya akan berubah menjadi floating point
echo "Integer Overflow 32 Bit : ";
var_dump(2147483648);
echo "Integer Overflow 64 Bit : ";
var_dump(9223372036854775809);// otomatis menjadi float