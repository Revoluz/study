#include <ios>
#include <iostream>
#include <fstream> // ofstreas,ifstream,fstream

using namespace std;

int main(){

  /*ios::out = default,operasi output/ menulis ke file yang sudah ada;*/
  /*ios::app = menuliskan dan menambah pada akhri baris;*/
  /*ios::trunc = default, membuat file jika tidak ada,dan kalau ada akan dihapus/rewrite;*/
  ofstream myFile;
  myFile.open("data1.txt",ios::out);
  myFile << "tuliskan pada data1";
  myFile.close();
  myFile.open("data2.txt",ios::trunc);
  myFile << "tampil di file data1";
  myFile.close();
  int a = 12345678;
  myFile.open("data3.txt",ios::app);
   myFile<<a;
  myFile << "tuliskan pada data3\n";
   myFile<<a;
  myFile.close();
  return 0;
}
