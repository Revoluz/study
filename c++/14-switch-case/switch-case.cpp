#include <iostream>

using namespace std;

int main() {
  int a;

  cout << "masukan nilai= ";
  cin >> a;
// jika tanpa break maka saat salah satu case benar maka case yang dibawahnya juga ikut dijalankan
  switch (a) {
  case 1:
    cout << "a = 1" << endl;
  case 2:
    cout << "a = 2" << endl;
  case 3:
    cout << "a = 3" << endl;
    break;
  case 4:
    cout << "a = 4" << endl;
    break;
  case 5:
    cout << "a = 5" << endl;
    break;
  default:
    cout << "ini default" << endl;
  }
  cout << "akhir dari program" << endl;
  return 0;
}
