#include <iostream>
#include <memory>
#include <string>

using namespace std;
// struct: data yang dibentuk oleh beberapa data
// kita bisa membuat variable mirip seperti tipe data yang mempunyai komponen di
// sub data menggunakan struct
/*jeruk = buah;*/
/*jeruk.warna*/
/*jeruk.berat*/
/*jeruk.harga*/
/*jeruk.rasa*/
struct buah {
  string warna;
  float berat;
  int harga;
  string rasa;
};

int main() {
  buah apel;
  buah jeruk;
  apel.warna = "merah";
  apel.berat = 250.50f;
  apel.harga = 5000;
  apel.rasa = "manis kesat";

  jeruk.warna = "orange";
  jeruk.berat = 150.50f;
  jeruk.harga = 20000;
  jeruk.rasa = "asam";

  cout << " apel" << endl;
  cout << "-" << apel.warna << endl;
  cout << "-" << apel.berat << endl;
  cout << "-" << apel.harga << endl;
  cout << "-" << apel.rasa << endl;

  cout << " jeruk" << endl;
  cout << "-" << jeruk.warna << endl;
  cout << "-" << jeruk.berat << endl;
  cout << "-" << jeruk.harga << endl;
  cout << "-" << jeruk.rasa << endl;
  return 0;
}
