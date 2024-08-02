#include <iostream>
using namespace std;
int main() {
  float a, b, hasil;
  char aritmatika;
  cout << "Masukan nilai pertama: ";
  cin >> a;
  cout << "Masukan operator +,-,*,/: ";
  cin >> aritmatika;
  cout << "Masukan nilai kedua:";
  cin >> b;

  cout << "\nHasil Perhitungan: " << a << aritmatika << b;
  /*if (aritmatika == '+') {*/
  /*  hasil = a + b;*/
  /*} else if (aritmatika == '-') {*/
  /*  hasil = a - b;*/
  /*} else if (aritmatika == '*') {*/
  /*  hasil = a * b;*/
  /*} else if (aritmatika == '/') {*/
  /*  hasil = a / b;*/
  /*} else {*/
  /*  cout << "operator anda salah" << endl;*/
  /*}*/
  switch (aritmatika) {
  case '+':
    hasil = a + b;
    break;
  case '-':
    hasil = a - b;
    break;
  case '*':
    hasil = a * b;
    break;
  case '/':
    hasil = a / b;
    break;
  default:
    cout << "operator anda salah" << endl;
  }
  cout << " = " << hasil << endl;
  cin.get();
  return 0;
}
