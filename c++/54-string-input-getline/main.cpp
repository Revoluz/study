#include <iostream>
#include <iterator>
#include <string>

int main() {
  std::string kalimat_input;
  std::cout << "Masukan kalimat:";
  std::getline(std::cin, kalimat_input);
  std::cout << "Input anda: " << kalimat_input << std::endl;
  // jumlah kata dari input
  int posisi = 0;
  int jumlah = 0;
  while (true) {
    posisi = kalimat_input.find(" ", posisi + 1);
    jumlah++;
    std::cout << "Posisi: " << posisi << " jumlah: " << jumlah << std::endl;
    if (posisi < 0) {
      break;
    }
  }
  return 0;
}
