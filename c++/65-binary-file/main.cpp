#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main(){
  fstream myFile;
  int number =12345;
  myFile.open("data.bin",ios::out | ios::binary);
  myFile.write(reinterpret_cast<char*>(&number), sizeof(number));
  /*myFile<< number;*/
  myFile.close();
  return 0;
}
