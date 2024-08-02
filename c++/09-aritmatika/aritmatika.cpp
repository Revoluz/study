#include <iostream>
#include <ostream>
using namespace std;

int main() {
  int a = 6;
  int b = 4;
  int hasil;
  // operatornya +,-,*,/,%
  //  penjumlahan
  hasil = a + b;
  cout << hasil << endl;
  // pengurangan
  hasil = a - b;
  cout << hasil << endl;
  // perkalian
  hasil = a * b;
  cout << hasil << endl;
  // perkalian
  hasil = a * b;
  cout << hasil << endl;
  // pembagian nilai varable hasi dan a/b bertipe data float
  hasil = a / b;
  cout << hasil << endl;
  //modulus tidak bisa di tampung di tipe data decimal
  hasil = a % b;
  cout << hasil << endl;

  // urutan eksekusi seperti urutan di matematika
  hasil = (a+b)*a;
  cout << hasil <<endl;
  cin.get();
  return 0;
}
