<?php 

class SocialMedia{
  public string $name;
}

class Instagram extends SocialMedia{
  final public function login(string $username, string $password): bool
  {
    return true;
  }
}
class FakeInsta extends Instagram{
  // error
  // public function login(string $username, string $password): bool
  // {
  //   return true;
  // }
}

final class Facebook extends SocialMedia {
  
}

// class FakeFacebook extends Facebook{ // erorr
  
// }


// final class
// Kata kunci final bisa digunakan di class, dimana jika kita menggunakan kata kunci final sebelum class, maka kita menandakan bahwa class tersebut tidak bisa diwariskan lagi
// Secara otomatis semua class child nya akan error

// Final Function

// Kata kunci final juga bisa digunakan di function
// Jika sebuah function kita tambahkan kata kunci final, maka artinya function tersebut tidak bisa di override lagi di class child nya
// Ini sangat cocok jika kita ingin mengunci implementasi dari sebuah method agar tidak bisa diubah lagi oleh class child nya
