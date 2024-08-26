<?php

require_once "data/Manager.php";

$manager = new Manager();
$manager->name = "Fanan";
$manager->sayHello("Joko");

$vp = new VicePresident();
$vp->name = "Joko";
$vp->sayHello("Fanan");