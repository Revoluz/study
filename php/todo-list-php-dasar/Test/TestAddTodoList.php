<?php
require_once __DIR__ . "/../Model/TodoList.php";
require_once __DIR__ . "/../BusinessLogic/AddTodoList.php";

addTodoList("Ahmad");
addTodoList("Fadhil");
addTodoList("Fanani");
var_dump($todoList);
