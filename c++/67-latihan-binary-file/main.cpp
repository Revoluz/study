#include <fstream>
#include <iostream>
#include <iterator>
#include <string>

using namespace std;

struct Mahasiswa {
  int NIM;
  string nama;
  string jurusan;
};

// latihan I/O External file binary
int main() {
  fstream myFile;
  // ios trunc berfungsi untuk membuat file
  myFile.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);
  /*myFile.close();*/
  Mahasiswa mahasiswa1, mahasiswa2, mahasiswa3;

  mahasiswa1.NIM = 123;
  mahasiswa1.nama = "Fanan";
  mahasiswa1.jurusan = "Informatika";

  mahasiswa2.NIM = 456;
  mahasiswa2.nama = "Pragos";
  mahasiswa2.jurusan = "Sastra Mesin";

  mahasiswa3.NIM = 789;
  mahasiswa3.nama = "Vijay";
  mahasiswa3.jurusan = "hukum alam";

  myFile.write(reinterpret_cast<char*>(&mahasiswa1),sizeof(Mahasiswa));
  myFile.write(reinterpret_cast<char*>(&mahasiswa2),sizeof(Mahasiswa));
  myFile.write(reinterpret_cast<char*>(&mahasiswa3),sizeof(Mahasiswa));

  return 0;
}
