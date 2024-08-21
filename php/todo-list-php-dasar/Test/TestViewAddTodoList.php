<?php

require_once __DIR__ . "/../View/ViewAddTodoList.php";
require_once __DIR__ . "/../BusinessLogic/ShowTodoList.php";
require_once __DIR__ . "/../BusinessLogic/AddTodoList.php";
addTodoList("Ahmad");
addTodoList("Fadhil");
addTodoList("Fanani");
viewAddTodoList();
showTodoList();

viewAddTodoList();
showTodoList();