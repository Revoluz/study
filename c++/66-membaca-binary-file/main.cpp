#include <ios>
#include <iostream>
#include <string>
#include <fstream>
#include <type_traits>

using namespace std;
int main(){
  fstream myFile;
  int hasil;
  myFile.open("data.bin",ios::in|ios::binary);

  myFile.read(reinterpret_cast<char*>(&hasil),sizeof(hasil) );
  /*myFile >> hasil;*/
  cout << "besar integer = " << sizeof(hasil) << endl;
  cout<< hasil <<endl;
  return 0;
}

  /*fstream myFile;*/
  /*int number =12345;*/
  /*myFile.open("data.bin",ios::out | ios::binary);*/
  /*myFile.write(reinterpret_cast<char*>(&number), sizeof(number));*/
  /*//myFile<< number;*/
  /*myFile.close();*/
