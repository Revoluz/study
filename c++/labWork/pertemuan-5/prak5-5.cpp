#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  int angka;
  cout << "Masukan angka ";
  cin >> angka;
  switch (angka) {
  case 1:
    cout << "One" << endl;
    break;
  case 2:
    cout << "Two" << endl;
    break;
  case 3:
    cout << "Three" << endl;
    break;
  case 4:
    cout << "Four" << endl;
    break;
  default:
    cout << "Others" << endl;
    break;
  }
  return 0;
}
