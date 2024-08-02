#include <cmath>
#include <iostream>
#include <limits>
#include <ostream>

using namespace std;

int main() {
  // will warning limits
  /*int a = 2147483648;*/
  /*int a = -2147483649;*/
  // bilangan bulat
  int a = 1;  // 32-bit
  unsigned positif = 5; //tidak bertanda +/- jadi nilai nya dua kali int
  long b = 2; // 64-bit
  short c = 7; // 16 bit 
  cout << a << endl;

  // bilangan decimal
  float d = 1.1;
  double e = 2.5;

  //character
  char f = 'a';// 1 bit

  // boolean
  bool g = true; // true/false

  cout << sizeof(a) << " byte" << endl;
  cout << numeric_limits<int>::max() << endl;
  cout << sizeof(b) << " byte" << endl;
  cout << numeric_limits<long>::max() << endl;
  cin.get();
  return 0;
}

// 1 byte = 8 bit
// a = 4 byte = 32 bit
