<?php

require_once __DIR__. "/data/Manager.php";

$manager = new Manager();
$manager-> name = "Joko";
$manager->sayHello("Fanan");

$vp = new VicePresident();
$vp->name = "Fanan";
$vp->sayHello("Joko");