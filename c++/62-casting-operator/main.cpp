#include <iostream>
using namespace std;

int main() {
  int a = 5;
  float b = 6.67f;
  char c = 'd';
  // implicit casting
  // konsep yang memungkinkan kita mengonversi satu tipe data ke tipe data lain
  /*int hasil; // 11*/
  float hasilTambah; // 11.67
  hasilTambah = a + b;
  cout << hasilTambah << endl;
  // explicit casting
  cout << a + (int)b << endl;
  cout << a + (float)b << endl;

  cout << (int)c << endl; //casting char 
  cout << c + a << endl;
  cout << (char)(c + a) << endl;

  return 0;
}
