#include <iostream>
#include <string>

using namespace std;

int main() {
  string kalimat_1("Dayat suka olahraga supaya sehat");
  string kalimat_2("Ucup suka makan pisang di pagi hari");

  cout << "1: " << kalimat_1 << endl;
  cout << "2: " << kalimat_2 << endl;

  // substring , mengambil string di tengah-tengah
  // substr(index,panjang)
  // index di mulai dari 0
  // panjang dimulai dari 2
  // kode dibawah mulai memotong dari index ke 11 dan diambil 8 karakter
  cout << kalimat_1.substr(11, 8) << endl;
  cout << kalimat_2.substr(10, 5) << endl;

  // mencari posisi dari substring
  cout << kalimat_1.find("olahraga") << endl;
  // tidak ada
  cout << kalimat_2.find("olahraga") << endl;
  // tidak ada
  cout << kalimat_2.find("Pisang") << endl;
  // ada
  cout << kalimat_2.find("pisang") << endl;

  int a = kalimat_1.find("ya");
  // ya posisi pertama
  cout << a << endl;
  // ya posisi kedua
  // a+1 berfungsi untuk awal start dari posisi index ya pertama
  cout << kalimat_1.find("ya", a + 1) << endl;

  // mencari posisi dari belakang -> rfind
  cout << kalimat_2.rfind("an") << endl;

  return 0;
}
