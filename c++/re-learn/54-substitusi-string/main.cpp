#include <iostream>
#include <string>

using namespace std;
int main() {
  string kalimat_1("aku suka kamu suka, siapa? dia!");
  string kalimat_2("wakanda forevah!!!");
  cout << "1: " << kalimat_1 << endl;
  cout << "2: " << kalimat_2 << endl;

  // swap string
  kalimat_1.swap(kalimat_2);
  cout << "swap string" << endl;
  cout << "1: " << kalimat_1 << endl;
  cout << "2: " << kalimat_2 << endl;

  // replace, menganti string
  kalimat_2.replace(27, 3, "Otong");
  int posisi = kalimat_1.find("ah");
  kalimat_1.replace(posisi, 2, "er");
  cout << "swap string" << endl;
  cout << "1: " << kalimat_1 << endl;
  cout << "2: " << kalimat_2 << endl;

  // insert string
  kalimat_1.insert(8, "dan hatiku ");
  cout << "insert string" << endl;
  cout << "1: " << kalimat_1 << endl;
  cout << "2: " << kalimat_2 << endl;
  return 0;
}
