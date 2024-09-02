<?php
require_once __DIR__."/data/ConstructPerson.php";
$fanan = new ConstructPerson("Fanan","Jogja",18);

echo "Program Selesai" . PHP_EOL;


// Jika constructor adalah function yang akan dipanggil ketika object dibuat
// Destructor adalah function yang akan dipanggil ketika object dihapus dari memory
// Biasanya ketika object tersebut sudah tidak lagi digunakan, atau ketika aplikasi akan mati
// Untuk membuat function destructor, kita bisa menggunakan nama function __destruct()
// Khusus untuk destructor, kita tidak boleh menambahkan function argument
// Dalam penggunaan sehari-hari, ini misal cocok untuk menutup koneksi ke database atau menutup proses menulis ke file, sehingga tidak terjadi memory leak
// object setelah class dijalankan tidak bisa dipakai
