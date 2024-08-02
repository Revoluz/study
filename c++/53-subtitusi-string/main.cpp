#include <iostream>
#include <ostream>
#include <string>

using namespace std;

int main() {
  string kalimat_1("aku suka kamu suka, siapa? dia");
  string kalimat_2("wakanda forevah!!!");

  cout << "1: " << kalimat_1 << endl;
  cout << "2: " << kalimat_2 << endl;

  // swap string(menukar string)
  cout << "swap string" << endl;
  kalimat_1.swap(kalimat_2);
  cout << "1: " << kalimat_1 << endl;
  cout << "2: " << kalimat_2 << endl;
  // replace, menganti string
  cout << " string" << endl;
  // replace(index,jumlah huruf yang akan diganti, huruf)
  kalimat_2.replace(27, 3, "otong");
  /*int posisi = kalimat_1.find("ah");*/
  /*kalimat_1.replace(posisi,2,"er");*/
  kalimat_1.replace(kalimat_1.find("ah"), 2, "er");
  cout << "1: " << kalimat_1 << endl;
  cout << "2: " << kalimat_2 << endl;

  // insert string
  cout << "insert string" << endl;
  kalimat_1.insert(8, "dan otong ");
  cout << "1: " << kalimat_1 << endl;
  cout << "2: " << kalimat_2 << endl;

  return 0;
}
