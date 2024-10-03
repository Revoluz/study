
#include <fstream>
#include <iostream>
#include <string>

using namespace std;
struct Mahasiswa {
  int NIM;
  string nama;
  string jurusan;
};

int main() {
  fstream myFile;
  Mahasiswa dataBaca;
  myFile.open("data.bin", ios::in | ios::binary);
  // 0-----72-----|-----72-----|-----72-----|
  // satu paragraph 72 sizeof
  /*cout << sizeof(Mahasiswa)<<endl; //72*/
  myFile.seekp(2 * sizeof(Mahasiswa));
  myFile.read(reinterpret_cast<char *>(&dataBaca), sizeof(Mahasiswa));

  cout << dataBaca.NIM << endl;
  cout << dataBaca.nama << endl;
  cout << dataBaca.jurusan << endl;
  myFile.close();
  return 0;
}
