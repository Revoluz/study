#include <iostream>

using namespace std;

enum warna {
  // posisi berdasarkan index dimulai dari 0
  merah,putih,hitam,coklat=5,kuning,biru
};
int main(){
  warna kain;
  kain = kuning ;
  cout << kain << endl;
  if (kain == kuning) {
    cout <<"Warna Kain kuning"<< endl;
  }
  return 0;
}
