<?php

class Category
{
  private string $name;
  private bool $expensive;
  public function setName(string $name): void
  {
    // salah satu keunggulan metode getter setter yaitu data lebih aman
    // validasi nama tidak boleh kosong
    // trim agar spasi dan whitespace nya hilang
    if (trim($name) != "") {
      $this->name = $name;
    }
  }
  public function getName(): string
  {
    return $this->name;
  }

  public function setExpensive(bool $expensive): void
  {
    $this->expensive = $expensive;
  }
  public function isExpensive()
  {
    return $this->expensive;
  }
}

// Encapsulation

// Encapsulation artinya memastikan data sensitif sebuah object tersembunyi dari akses luar
// Hal ini bertujuan agar kita bisa menjaga agar data sebuah object tetap baik dan valid
// Untuk mencapai ini, biasanya kita akan membuat semua properties menggunakan access modifier private, sehingga tidak bisa diakses atau diubah dari luar
// Agar bisa diubah, kita akan menyediakan function untuk mengubah dan mendapatkan properties tersebut

// Getter dan Setter

// Di PHP, proses encapsulation sudah dibuat standarisasinya, dimana kita bisa menggunakan Getter dan Setter method.
// Getter adalah function yang dibuat untuk mengambil data field
// Setter ada function untuk mengubah data field


// Getter dan Setter Method
//  Tipe Data

// boolean
// Getter Method
// isXxx(): bool
// Setter Method
// setXxx(bool value)

// lainnya
// Getter Method
// getXxx(): tipeData
// Setter Method
// setXxx(tipeData value)
