#include <iostream>
#include <iterator>
#include <ostream>
#include <string>

int main() {
  // string sebenarnya adalah kumpulan char

  // array char tidak bisa ditambah ,fiks karena array tetapi karakter bisa
  // kurang dari array yang telah ditentukan conth char huruf dapat disi 4
  // karakter
  char huruf[5] = {'m', 'o', 'b', 'i', 'l'};
  std::cout << huruf << std::endl;
  // string tidak bisa ada spasi
  std::string kata("mobil");
  std::cout << kata << std::endl;
  std::string data;
  std::cout << "masukan kata "<< std::endl;
  std::cin >> data;
  std::cout << "data yang dimasukan adalah: ";
  std::cout << data<< std::endl;
  return 0;
}
