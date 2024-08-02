#include <iostream>
#include <string>

using namespace std;
int main() {
  // tidak bisa melakukan perbandingan char yang lebih dari 1
  /*char kata[4] = {'u', 'c', 'u', 'p'};*/
  /*char pembanding[4] = {'u', 'c', 'u', 'p'};*/
  // perbandingan string
  string kata("ucup");

  if (kata == "ucup") {
    cout << "berhasil" << endl;
  }
  string input;
  string nama_rahasia("ucup");
  while (true) {
    cout << "tebak nama:";
    cin >> input;
    cout <<input<<endl;
    cout << "nama yang anda masukan adalah: " << input << endl;
    if (input == nama_rahasia) {
      cout << "tebakan anda benar !!!" << endl;
      break;
    } else {
      cout << "tebakan anda salah" << endl;
    }
  }
  cout << "program selesai" << endl;
  return 0;
}
