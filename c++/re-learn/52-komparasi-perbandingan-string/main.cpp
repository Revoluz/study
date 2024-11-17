#include <iostream>
#include <string>
using namespace std;

int main() {
  char kata[4] = {'u', 'c', 'u', 'p'};
  // harus di convert ke string
  string kata1(kata);
  cout << kata1 << endl;

  bool kondisi;
  kondisi = kata1 == "ucup";
  cout << kondisi << endl;
  string nama_rahasia("joko");
  string input;
  while (true) {
    cout << "tebak nama : ";
    cin >> input;
    if (input == nama_rahasia) {
      cout << "Tebakan anda benar!!!" << endl;
      break;
    } else {
      cout << "Tebakan anda salah" << endl;
    }
  }
  return 0;
}
