#include <iostream>

using namespace std;

int main() {
  // assignment
  int a = 10;
  cout << "nilai awal dari a adalah: " << a << endl;
  /*self manipulation (manipulasi variabelnya)*/
  /*a = a + 3;*/
  // assignment operator
  // variabel = variabel operator ekspresi
  // a = a - (1+2);
  //  lebih efektif
  //  variabel operator = ekspresi
  //  a += 3;
  a += 3;
  cout << "ditambah 3 menjadi " << a << endl;
  a -= 3;
  cout << "dikurangi 3 menjadi " << a << endl;
  a /= 2;
  cout << "dibagi 2 menjadi " << a << endl;
  a *= 2;
  cout << "dikali 2 menjadi " << a << endl;
  a %= 3;
  cout << "modulus 3 menjadi " << a << endl;
  cin.get();
  return 0;
}
