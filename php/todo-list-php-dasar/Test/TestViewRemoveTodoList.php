<?php
require_once __DIR__ . "/../Model/TodoList.php";
require_once __DIR__ . "/../View/ViewRemoveTodoList.php";
require_once __DIR__ . "/../BusinessLogic/AddTodoList.php";
require_once __DIR__ . "/../BusinessLogic/ShowTodoList.php";
addTodoList("Ahmad");
addTodoList("Fadhil");
addTodoList("Fanani");
addTodoList("Budi");
addTodoList("Vijax");
showTodoList();
viewRemoveTodoList();
showTodoList();
