#include <iostream>
#include <ostream>

using namespace std;

int main() {
  // increment dan decrement
  // preincrement dan postincrement
  int a = 5;
  int b = 5;
  // postincrement
  cout << a << endl;
  cout << a++ << endl; // a = a+1; di cetak dulu lalu di ditambah
  cout << a << endl << endl;

  // preincrement
  cout << b << endl;
  cout << ++b << endl; // b = 1+b; ditambahkan dulu lalu di cetak
  cout << b << endl << endl;

  // postincrement

  cout << a << endl;
  cout << a-- << endl; // a = a-1; di cetak dulu lalu di ditambah
  cout << a << endl << endl;

  // preincrement
  cout << b << endl;
  cout << --b << endl; // b = 1-b; ditambahkan dulu lalu di cetak
  cout << b << endl;

  cin.get();
  return 0;
}
