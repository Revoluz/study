<?php

namespace Data;
class Shape{
  public function getCorner(){
    return 0;
  }
}
class Rectangle extends Shape{
  public function getCorner()
  {
    return 4;
  }
  public function getParentCorner()
  {
    // mengakses function parent
    // diperlukan jika ada 2 function yang sama/overide dan kita membutuhkan function yang ada di parent
    return parent::getCorner();
  }
}