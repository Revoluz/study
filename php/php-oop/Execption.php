<?php
require_once __DIR__."/exception/ValidationException.php";
require_once __DIR__ . "/data/LoginRequest.php";
require_once __DIR__ . "/Helper/Validation.php";

$loginRequest = new LoginRequest();
$loginRequest->username ="fanan";
$loginRequest->password = "";
$name="test";

// trycatch

try {
  validateLoginRequest($loginRequest);
} catch (ValidationException $exception)  { //error apa yang ingin di tangkap 
  echo "Validation Error : {$exception->getMessage()}" . PHP_EOL;
}catch(Exception $exception){
  echo "Exception Error : {$exception->getMessage()}".PHP_EOL;
  // var_dump($exception->getTrace());
  echo $exception->getTraceAsString().PHP_EOL;
} catch (Exception | ValidationException $exception) { // jika ingin menangkap lebih dari 2 class exception
  echo "Exception Error : {$exception->getMessage()}" . PHP_EOL;
}finally{
  echo "Error atau enggak,tetap akan dieksekusi";
}
echo "Valid".PHP_EOL;

// Dalam try-catch, kita bisa menambahkan block finally
// Block finally ini adalah block dimana akan selalu dieksekusi baik terjadi exception ataupun tidak
// Ini sangat cocok ketika kita ingin melakukan sesuatu, tidak peduli sukses ataupun gagal, misal di block try kita ingin membaca file, di block catch kita akan tangkap jika terjadi error, dan di block finally error ataupun sukses membaca file, kita wajib menutup koneksi ke file tersebut, biar tidak menggantung di memory

// Exception di PHP memiliki sebuah function bernama getTrace()
// Function getTrace() berisikan informasi dari exception yang terjadi, seperti lokasi file, baris ke berapa, function mana sampai argumenty yang dikirim di function tersebut apa
// Ini sangat cocok untuk kita jika ingin mendebug ketika terjadi exception
