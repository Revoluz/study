#include <iostream>
using namespace std;

int main() {
  int bayar = 0, pilih;
  char confirm;
  bool condition= true;
  while (condition) {

    cout << "Menu Makan:\n";
    cout << "1. Nasi Ayam 10k \n";
    cout << "2. Nasi Nila 15k\n";
    cout << "3. Nasi Telur 8k\n";
    cout << "Pilih Menu Makanan(1/2/3)";
    cin >> pilih;
    switch (pilih) {
    case 1:
      bayar += 10000;
      break;
    case 2:
      bayar += 15000;
      break;
    case 3:
      bayar += 8000;
      break;
    default:
      cout << "Input tidak valid";
      break;
    }
    cout << "Minuman: \n";
    cout << "1. Es Teh 2k \n";
    cout << "2. Es Jeruk 3k \n";
    cout << "3. Es Susu 4k \n";
    cout << "Pilih Menu Minuman(1/2/3)";
    cin >> pilih;
    switch (pilih) {
    case 1:
      bayar += 2000;
      break;
    case 2:
      bayar += 3000;
      break;
    case 3:
      bayar += 4000;
      break;
    default:
      cout << "Input tidak valid";
      break;
    }
    cout << "Apakah anda ingin memesan lagi?(y/n)";
    cin >> confirm;
    if (confirm != 'y') {
    
      condition = false;
    }
  }
  cout << "Anda harus membayar sebesar Rp."<< bayar<<endl;
  return 0;
}
