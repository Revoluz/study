<?php
require_once __DIR__ . "/../Model/TodoList.php";
require_once __DIR__ . "/../BusinessLogic/ShowTodoList.php";
require_once __DIR__ . "/../View/ViewAddTodoList.php";
require_once __DIR__ . "/../View/ViewRemoveTodoList.php";
require_once __DIR__ . "/../Helper/Input.php";
function viewShowTodoList()
{
  global $todoList;
  while (true) {
    # code...
    if (!empty($todoList)) {
      showTodoList();
    }
    echo "MENU" . PHP_EOL;
    echo "1. Tambah Todo" . PHP_EOL;
    echo "2. Hapus Todo" . PHP_EOL;
    echo "x. Keluar" . PHP_EOL;
    $pilihan = input("Pilih");
    if ($pilihan == "1") {
      if (!empty($todoList)) {
        showTodoList();
      }
      viewAddTodoList();
    } elseif ($pilihan == "2") {
      if (!empty($todoList)) {
        showTodoList();
      }
      viewRemoveTodoList();
    } elseif ($pilihan == "x") {
      // menghetikan perulangan
      break;
    } else {
      echo "Pilihan tidak dimengerti" . PHP_EOL;
    }
  }
  echo "Program selesai".PHP_EOL;
}
