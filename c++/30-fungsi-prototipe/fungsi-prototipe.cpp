#include <iostream>

using namespace std;

// prototipe adalah mendeklarasi kan fungsi terlebih dahulu lalu mendefinisikan
// perintah nya terakhir

double hitung_luas(double p, double l);
void println(double x);
int main(int argc, char *argv[]) {
  double panjang, lebar, luas;
  cin >> panjang;
  cin >> lebar;
  luas = hitung_luas(panjang, lebar);
  println(luas);
  return 0;
}

double hitung_luas(double p, double l) { return p * l; }
void println(double x) { cout << x << endl; }
