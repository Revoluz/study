<?php

class Product{
  private string $name; //tidak bisa diakses langsung 
// echo $product->name . PHP_EOL; //error tidak bisa diakses berlaku di private dan protected

  protected int $price;
  public function __construct(string $name,int $price){
    $this->name =$name;
    $this->price = $price;
  }
  public function getName(): string
  {
    return $this->name;
  }
  public function getPrice(): int
  {
    return $this->price;
  }
}

class ProductDummmy extends Product{
  public function info()
  {
    echo "Name $this->name". PHP_EOL;  // error dikarenakan $name bersifat private
    echo "Price $this->price". PHP_EOL;
  }
}