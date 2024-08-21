<?php

require_once __DIR__ . "/../View/ViewShowTodolist.php";
require_once __DIR__."/../BusinessLogic/AddTodoList.php";
addTodoList("Ahmad");
addTodoList("Fadhil");
addTodoList("Fanani");
viewShowTodoList();
