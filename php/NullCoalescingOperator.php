<?php
$data =[
  // "action"=>"Create"
];

if (isset($data["action"])) {
  $action =$data["action"];
}else{
  $action = "Nothing";
}
echo $action . PHP_EOL;

// alternatif menggunakan null coalescing operator
$data =[];
// true ?? false
$action = $data["action"] ?? "Nothing";
echo $action . PHP_EOL;