#include <iostream>
#include <string>

/*using namespace std;*/

int main() {
  std::string kalimat_input;

  // getline(cin,variabel);
  std::cout << "Masukan Kalimat: ";
  std::getline(std::cin, kalimat_input);
  std::cout << "Input anda: " << kalimat_input << std::endl;

  int posisi = 0;
  int jumlah = 0;

  while (true) {
    posisi = kalimat_input.find(" ", posisi + 1);
    jumlah++;
    std::cout << "Posisi: " << posisi << " jumlah: " << jumlah << std::endl;
    // ketika -1 itu tandanya merupakan kata terakhir
    if (posisi < 0) {
      break;
    }
  }
  std::cout << "Jumlah kata : " << jumlah << std::endl;

  return 0;
}
