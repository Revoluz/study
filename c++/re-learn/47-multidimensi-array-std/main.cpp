#include <array>
#include <iostream>
using namespace std;

const int baris = 2;
const int kolom = 3;
void printArray(array<array<int, kolom>, baris> &arrays) {
  for (array<int, kolom> array : arrays) {
    cout << "[ ";
    for (int value : array) {
      cout << value << " ";
    }
    cout << "]"<< endl;
  }
}
int main() {
  array<array<int, kolom>, baris> nilaiMD = {0, 1, 2, 3, 4, 5};
  printArray(nilaiMD);
  return 0;
}
