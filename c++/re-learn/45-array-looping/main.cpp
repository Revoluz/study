#include <array>
#include <iostream>
using namespace std;

int main() {
  array<int, 10> nilai = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  /*int nilai[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};*/
  for (int nilaiArr : nilai) {
    // address akan constan
    cout << "address " << &nilaiArr << " nilainya: " << nilaiArr << endl;
    // array tidak berubah dikarenakan menggunakan addres dari variable nilaiArr bukan address dari variable array nilai
    nilaiArr = 1;
  }
  cout << endl;

  // mengubah array menggunakan referensi
  // address menggunakan address dari nilai bukan variable nilaiArr
  for (int &nilaiArr : nilai) {
    nilaiArr *= 2;
  }

  for (int &nilaiArr : nilai) {
    cout << "address " << &nilaiArr << " nilainya: " << nilaiArr << endl;
  }
}
