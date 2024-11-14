#include <algorithm>
#include <array>
#include <cstddef>
#include <iostream>

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

  std::sort(angka.begin(), angka.end());
  std::sort(huruf.begin(), huruf.end());

  printArray(angka);
  printArray(huruf);
  return 0;
}
/*int &a : angka digunakan saat Anda ingin memodifikasi elemen asli di dalam
 * array.*/
/*int a : angka digunakan saat Anda hanya ingin membaca atau bekerja dengan
 * salinan elemen tanpa mengubah array aslinya.*/
