#include <algorithm>
#include <array>
#include <cstddef>
#include <iostream>
#include <ostream>

const size_t arraySize = 10;
void printArray(std::array<int, arraySize> &angka) {
  std::cout << "Array: ";
  for (int &a : angka) {
    std::cout << a << " ";
  }
  std::cout << std::endl;
}
void printArray(std::array<char, arraySize> &huruf) {
  std::cout << "Array: ";
  for (char &a : huruf) {
    std::cout << a << " ";
  }
  std::cout << std::endl;
}
int main() {

  std::array<int, arraySize> angka = {0, 3, 1, 4, 6, 7, 2, 9, 8, 5};
  std::array<char, arraySize> huruf = {'s', 'q', 'g', 'g', 'p',
                                       'm', 'z', 'a', 'l', 't'};

  printArray(angka);
  printArray(huruf);
  std::cout << std::endl;
  // sort dulu
  // search-> binary_search
  int angkaCari;
  char hurufCari;
  bool ketemu;
  std::cout << "Mencari angka dalam array (0-9): ";
  /*std::cin >> angkaCari;*/
  std::cin >> hurufCari;
  std::sort(angka.begin(), angka.end());
  std::sort(huruf.begin(), huruf.end());
  /*ketemu = std::binary_search(angka.begin(), angka.end(), angkaCari);*/
  ketemu = std::binary_search(huruf.begin(), huruf.end(), hurufCari);
  /*std::cout << ketemu;*/
  if (ketemu) {
    std::cout << "ketemu" << std::endl;
  } else {
    std::cout << "tidak ketemu" << std::endl;
  }

  return 0;
}
