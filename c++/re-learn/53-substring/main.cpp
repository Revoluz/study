#include <iostream>
#include <string>

using namespace std;
int main() {
  string kalimat_1("Dayat suka olahraga supaya sehat");
  string kalimat_2("Ucup suka makan pisang di pagi hari");

  cout << "1: " << kalimat_1 << endl;
  cout << "2: " << kalimat_2 << endl;

  // substring, mengambil string di tengah-tengah
  // substr(indexAwal,panjang)
  //
  cout << kalimat_1.substr(11, 8) << endl;
  cout << kalimat_2.substr(16, 6) << endl;
  // mencari posisi dari substring
  cout << "posisi olahraga" << endl;
  cout << kalimat_1.find("olahraga") << endl;
  /*cout << kalimat_2.find("olah") << endl; // tidak ketemu*/
  cout << kalimat_2.find("olah") << endl; // tidak ketemu
  cout << "posisi pisang" << endl;
  cout << kalimat_2.find("pisang") << endl; // tidak ketemu

  int a = kalimat_1.find("ya");
  cout << a << endl;
  // a+a merupakan index mulai mencari kalimat
  cout << kalimat_1.find("ya", a + 1) << endl;

  // mencari posisi dari belakang
  cout << kalimat_2.rfind("an") << endl;

  return 0;
}
// memotong/ mengambil array
