#include <iostream>

using namespace std;

int main() {
  int a;
  cout << "Masukan nilai angka :";
  cin >> a;
  // if statement
  // kondisi dalam bentuk boolean
  // jika hanya di isi variable a dan value nya 1 atau lebih maka hasilnya true jika value nya 0 maka hasilnya false 
  if (a < 5) {
    cout << "halo" << endl;
  }
  cout << "selesai" << endl;
  cin.get();
  return 0;
}
