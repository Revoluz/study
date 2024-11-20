#include <iostream>
using namespace std;

enum warna { merah, putih, hitam, coklat = 5, kuning, biru };
// 0,1,2,5,6,7

int main() {
  warna kain;
  kain = merah;
  if (kain == merah) {
    cout << "Warna kain merah" << endl;
  }
  cout << kain << endl;
  return 0;
}
