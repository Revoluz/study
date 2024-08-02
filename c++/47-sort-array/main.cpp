#include <algorithm>
#include <array>
#include <iostream>

const size_t arraySize = 10;
/*function dibawah termasuk jenis overloading function yaitu fitur pemrograman
 * berorientasi objek yang memungkinkan untuk membuat dua atau lebih fungsi
 * dengan nama yang sama, tetapi dengan parameter yang berbeda */
void printArray(std::array<int, arraySize> &angka) {
  std::cout << "Array: ";
  for (int &a : angka) {
    std::cout << a << " ";
  }
  std::cout << std::endl;
}
void printArray(std::array<char, arraySize> &huruf) {
  std::cout << "Array: ";
  for (char &b : huruf) {
    std::cout << b << " ";
  }
  std::cout << std::endl;
}
int main() {
  std::array<int, arraySize> angka = {9, 3, 2, 5, 1, 4, 7, 8, 6, 0};
  std::array<char, arraySize> huruf = {'c', 'h', 'j', 'e', 'r',
                                       't', 'y', 'v', 'b', 'a'};

  printArray(angka);
  printArray(huruf);
  std::cout << std::endl;
  std::cout << "Sorting Array :"<< std::endl;
  // mengurutkan nilai array
  // begin() nilainya adalah awal dari array
  // end() nilainya adalah akhir dari array
  /*std::cout << *angka.begin()<<std::endl;*/
  /*std::cout << *angka.end()<<std::endl;*/
  std::sort(angka.begin(), angka.end());
  printArray(angka);
  std::sort(huruf.begin(), huruf.end());
  printArray(huruf);

  return 0;
}
