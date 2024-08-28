<?php

namespace Data;
// tidak dapat langsung mengakses Location 
abstract class Location{
  public string $name;
}

class City extends Location{

}
class Province extends Location{

}
class Country extends Location{
  
}

// Abstract Class

// Saat kita membuat class, kita bisa menjadikan sebuah class sebagai abstract class.
// Abstract class artinya, class tersebut tidak bisa dibuat sebagai object secara langsung, hanya bisa diturunkan
// Untuk membuat sebuah class menjadi abstract, kita bisa menggunakan kata kunci abstract sebelum kata kunci class
// Sehingga Abstract Class bisa kita gunakan sebagai kontrak child class
