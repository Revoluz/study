#include <bitset>
#include <iostream>
#include <string>
using namespace std;
void printBinary(unsigned short val, string nama) {
  // 8 bit yang akan ditampilkan dari variable a
  cout << nama << " = " << bitset<8>(val) << endl;
}
int main() {
  /*https://youtu.be/_yjPqk3uFng?si=daIOdORfCbfFLDAF&t=356*/
  /*unsigned short a=5; //short hanya mengambil nilai positif*/
  unsigned short a = 7; // short hanya mengambil nilai positif
  unsigned short b = 10;
  unsigned short c;
  cout << "\n & = Bitwise AND" << endl;
  c = a & b;
  cout << c << endl;
  printBinary(a, "a");
  printBinary(b, "b");
  printBinary(c, "c");

  cout << "\n | = Bitwise OR" << endl;
  c = a | b;
  cout << c << endl;
  printBinary(a, "a");
  printBinary(b, "b");
  printBinary(c, "c");
  cout << "\n ^ = Bitwise XOR" << endl;
  c = a ^ b;
  cout << c << endl;
  printBinary(a, "a");
  printBinary(b, "b");
  printBinary(c, "c");
  cout << "\n ~ = Bitwise NOT (kebalikannya)" << endl;
  c = ~a;
  cout << c << endl;
  printBinary(a, "a");
  printBinary(c, "c");
  cout << "\n << = Bitwise SHL(Shift Left)" << endl;
  //digunakan untuk mengeser posisi angka binner ke kiri
  c = a << 2; 
  cout << c << endl;
  printBinary(a, "a");
  printBinary(c, "c");
   cout << "\n >> = Bitwise SHR(Shift Right)" << endl;
  //digunakan untuk mengeser posisi angka binner ke kanan
  c = a >> 2; 
  cout << c << endl;
  printBinary(a, "a");
  printBinary(c, "c"); return 0;
}
// bitwise operator
//  & AND Bitwise AND
//  | OR Bitwise inclusive OR
//  ^ XOR Bitwise exclusive OR
//  ~ NOT
//  << SHL Shift bits left
//  >> SHR Shift bits right
