<?php

interface HelloWorld{
  public function sayHello(): void;

}

// terlalu ribet hanya untuk menampilkan hello world
// class SampleHelloWorld implements HelloWorld{
//   public function sayHello(): void
//   {
//     echo "Hello World".PHP_EOL;
//   }
// }
// $helloWorld = new SampleHelloWorld();

$helloWorld = new class("Fanan") implements HelloWorld{
  public string $name;
  public function __construct(string $name){
    $this->name= $name;
  }

  public function sayHello(): void
  {
     echo "Hello World".PHP_EOL;
  }
};
$helloWorld->sayHello();