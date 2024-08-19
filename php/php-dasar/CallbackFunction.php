<?php
function sayHello(string $name, callable $filter){
  $finalName = call_user_func($filter,$name);
  // $finalName = $filter($name); sama saja
  echo "Hello $finalName".PHP_EOL;
}
sayHello("Fanan", "strtoupper");
sayHello("Fanan", "strtolower");
sayHello("Fanan", function (string $name): string{
  return strtoupper($name);
});
sayHello("Fanan",fn($name)=> strtoupper($name));
