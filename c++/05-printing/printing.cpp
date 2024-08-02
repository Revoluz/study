#include <iostream>
// tidak ada ; dikarenakan bukan statement
// std mengambil function dari iostream
// :: artinya mengambil, cout artinya console out
int main() // main function
{
  // body statement
  std::cout << "ini baris baru\n"; // statement, statement harus diakhiri dengan ;
  std::cout << "Kawan-";
  std::cout << "kawan" << std::endl;
  std::cout << "Ini akhri Kalimat";
  std::cin.get();
  return 0; // menandakan saat selesai tidak ada yang gagal
} // tidak ada ; dikarenakan body statement
