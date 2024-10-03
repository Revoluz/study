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

// Null-safe operator
// The nullsafe operator provides functionality similar to null coalescing, but also supports method calls. Instead of writing this:

$country =  null;
 
if ($session !== null) {
    $user = $session->user;
 
    if ($user !== null) {
        $address = $user->getAddress();
 
        if ($address !== null) {
            $country = $address->country;
        }
    }
}
// PHP 8 allows you to write this:

$country = $session?->user?->getAddress()?->country;