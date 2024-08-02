#include <iostream>

using namespace std;

// overloading = menimpa
// basic function
int luas_kotak(int panjang, int lebar) {
  // function kotak persegi panjang
  int luas = panjang * lebar;
  return luas;
}
// overloading function
int luas_kotak(int sisi) {
  // function kotak persegi
  int luas = sisi * sisi;
  return luas;
}
int luas_kotak(double sisi) {
  // function kotak persegi dengan koma
  int luas = sisi * sisi;
  return luas;
}
int main() {
  // jika argument nya 2 maka function nya otomatis mengambil yang parameternya
  // juga 2
  cout << "luas kotak 2x3 : " << luas_kotak(2, 3) << endl;
  // mengambil function yang parameternya 1
  cout << "luas kotak 2x2 : " << luas_kotak(2) << endl;
  cout << "luas kotak 2.5x2.5 : " << luas_kotak(2.5) << endl;

  return 0;
}
