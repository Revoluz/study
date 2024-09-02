<?php

class Data implements IteratorAggregate{
  var string $first = "First";
  public string $second = "Second";
  private string $thrid ="thrid";
  protected string $forth = "forth";
  // digunakan untuk mengamankan data di array jika data ada data sensitif
  public function getIterator(): Traversable
  {
    $array=[
      "first"=>$this->first,
      "second"=>$this->second,
      "thrid"=>$this->thrid,
      "forth" => $this->forth,
    ];
    $iterator = new ArrayIterator($array);
    return $iterator;
  }
}
// iterator manual
$data = new Data();
// foreach akan langsung memangil function getIterator
foreach ($data as $property => $value) {
  echo "$property : $value".PHP_EOL;
}