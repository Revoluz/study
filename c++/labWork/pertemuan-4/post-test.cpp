#include <iostream>

using namespace std;

int main(){
  int totalDetik,jam ,menit ,detik;

  cout << "Masukan total Detik " ;
  cin >> totalDetik;

  jam = totalDetik / 3600;

  menit = (totalDetik % 3600) /60;
  detik = totalDetik % 60;

  cout << "Hasil Konversi: " << jam << " jam: " << menit << " menit: " << detik << " detik" << endl;

  return 0;
}