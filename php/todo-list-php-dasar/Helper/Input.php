<?php
function input(string $info) : string{
  echo "$info : ";
  $result = fgets(STDIN);
  // trim agar spasi dan whitespace nya hilang
  return trim($result);
}