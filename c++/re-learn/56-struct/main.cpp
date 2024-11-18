#include <iostream>
#include <string>

using namespace std;
// struct data yang di bentuk oleh beberapa data

struct buah {
  string warna;
  float berat;
  int harga;
  string rasa;
};

int main() {
  buah apel;
  buah jeruk;
  apel.warna = "red";
  apel.berat = 250.50f;
  apel.harga = 50000;
  apel.rasa = "manis kesat";

  cout << " apel" << endl;
  cout << "-" << apel.warna << endl;
  cout << "-" << apel.berat << endl;
  cout << "-" << apel.harga << endl;
  cout << "-" << apel.rasa << endl;

  jeruk.warna = "orange";
  jeruk.berat = 150.50f;
  jeruk.harga = 30000;
  jeruk.rasa = "manis kesat";
  cout << " jeruk" << endl;
  cout << "-" << jeruk.warna << endl;
  cout << "-" << jeruk.berat << endl;
  cout << "-" << jeruk.harga << endl;
  cout << "-" << jeruk.rasa << endl;

  return 0;
}
