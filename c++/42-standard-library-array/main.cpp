#include <iostream>
#include <array>
#include <ostream>

int main(){
  //membuat array dengan menggunakan standard library
  //array <int,jumlah array> 
  std::array <int,5> nilai;
  for(int i =0; i <= 4; i++){
    nilai[i] = i;
    std::cout << "nilai [" << i << "] =  "<< nilai[i]; 
    std::cout << " address : "<< &nilai[i] << std::endl;
  }
  // ukuran array
  std::cout<< "ukuran array : " << nilai.size() << std::endl;
  // address awal dari array
  std::cout << "address awal : "<< nilai.begin()<<std::endl;
  //address akhir dari array
  std::cout << "address akhir : " << nilai.end() << std::endl;
  //nilai dengan index
  std::cout<< "nilai ke 2 : "<< nilai.at(2) << std::endl;

  return 0;
}
