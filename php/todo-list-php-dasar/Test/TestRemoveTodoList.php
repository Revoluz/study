<?php
require_once __DIR__ . "/../BusinessLogic/RemoveTodoList.php";
require_once __DIR__. "/../Model/TodoList.php";
require_once __DIR__ . "/../BusinessLogic/ShowTodoList.php";
require_once __DIR__ . "/../BusinessLogic/AddTodoList.php";

// $todoList
addTodoList("Ahmad");
addTodoList("Fadhil");
addTodoList("Fanani");
addTodoList("Budi");
var_dump($todoList);
removeTodoList(1);
removeTodoList(1);
$value=removeTodoList(10);
var_dump($todoList);
var_dump($value);