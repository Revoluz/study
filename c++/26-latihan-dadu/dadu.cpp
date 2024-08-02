#include <cstdlib> //mengandung function random
#include <iostream>

using namespace std;

int main() {
  char input;
  while (true) {
    cout << "Mau melempar dadu? (y/n)";
    cin >> input;
    if (input == 'y') {

      cout << 1 + (rand() % 6) << endl;
      // perhitungan dadu berdasarkan sisa bagi dari 6 , jika tidak
      // ada sisa baginya atau hasilnya 0 maka ditambah 1 agar tidak ada 0
    } else if (input == 'n') {
      break;
    } else {
      cout << "input invalidate\n";
    }
  }
  return 0;
} 
