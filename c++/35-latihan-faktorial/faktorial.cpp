#include <iostream>

using namespace std;

// prototype
int faktorial(int n);
int main() {
  int angka, hasil;
  cout << "masukan angka : ";
  cin >> angka;
  hasil = faktorial(angka);
  cout << "\nhasil faktorial : " << hasil << endl;
  return 0;
}
int faktorial(int n) {
  if (n <= 1) {
    cout << n;
    return n;
  } else {
    cout << n << "*";
    return n * faktorial(n - 1);
  }
}
