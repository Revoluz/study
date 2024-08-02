#include <iostream>

using namespace std;

double hitung_luas(double p, double l) {
  double luas = p * l;
  return luas;
}
double hitung_keliling(double p, double l) {
  double keliling = 2 * (p + l);
  return keliling;
}
void tampilkan_luas(double panjang, double lebar) {
  cout << "luas = " << hitung_luas(panjang, lebar) << endl;
}
void tampilkan_keliling(double panjang, double lebar) {
  cout << "keliling = " << hitung_keliling(panjang, lebar) << endl;
}
int main(int argc, char *argv[]) {
  double panjang, lebar;
  cout << "Masukan Panjang Persegi Panjang ";
  cin >> panjang;
  cout << "Masukan Lebar Persegi Panjang ";
  cin >> lebar;
  tampilkan_luas(panjang, lebar);
  tampilkan_keliling(panjang, lebar);

  return 0;
}
