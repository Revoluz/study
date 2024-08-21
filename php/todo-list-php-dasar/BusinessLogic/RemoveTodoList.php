<?php

/**
 * menghapus todo di list
 */

function removeTodoList(int $number): bool
{
  global $todoList;
  if ($number > sizeof($todoList)) {
    return false;
  }
  for ($i = $number; $i < sizeof($todoList); $i++) {
    $todoList[$i] = $todoList[$i + 1];
  }
  unset($todoList[sizeof($todoList)]);
  return true;
}
// Sebelum Penghapusan:

// Array $todoList berisi tiga elemen: "Ahmad", "Fadhil", dan "Fanani".
// Anda ingin menghapus elemen pada indeks 2 (yaitu "Fadhil").
// Proses Penghapusan:

// Looping: Fungsi mulai mengiterasi array dari indeks 2 hingga akhir.
// Shifting: Pada setiap iterasi, elemen berikutnya digeser satu posisi ke kiri.
// Elemen pada indeks 2 ("Fadhil") digantikan oleh elemen pada indeks 3 ("Fanani").
// Elemen pada indeks 3 (yang sebelumnya "Fanani") sekarang menjadi "Fanani" juga.
// Penghapusan Elemen Terakhir: Setelah perulangan selesai, elemen terakhir (yang duplikat) dihapus menggunakan unset().