/*Union adalah tipe data yang berisi sekumpulan variabel yang dibungkus jadi
 * satu dan memiliki alamat memori yang sama.*/
/*tipe data yang ditentukan pengguna yang memungkinkan pengguna menyimpan
 * berbagai tipe data di lokasi memori yang sama*/
#include <iostream>

union data {
  int a;
  char b[4];
};
int main() {
  data data_union;
  data_union.a = 1083478237;
  /*std::cout << "data a:" << data_union.a << " value: " << sizeof(data_union.a)<< std::endl;*/
  std::cout << "data a:" << data_union.a << std::endl;
  std::cout << "data b:" << data_union.b << std::endl;
  data_union.b[0]='a';
  data_union.b[1]='b';
  data_union.b[2]='c';
  data_union.b[3]='d';

  std::cout << "data a:" << data_union.a << std::endl;
  std::cout << "data b:" << data_union.b << std::endl;
  return 0;
}
