#include <fstream>
#include <iostream>
#include <ostream>
#include <string>

using namespace std;

int main() {
  ifstream myFile;

  string output, buffer, nama;
  string no;
  bool isData = false;
  int jumlahData =0;
  /*Buffer adalah istilah umum yang merujuk pada blok memori yang berfungsi
   * sebagai tempat penampung sementara*/

  myFile.open("data.txt");
  // ambil output dari myFile
  /*myFile >>output; // ini*/
  /*myFile >>output; // adalah*/
  /*getline(myFile, buffer); // baris pertama*/
  /*output.append(buffer);*/
  /*getline(myFile, buffer); // baris kedua*/
  /*output.append("\n" + buffer);*/
  /*cout << output << endl;*/
  while (!isData) {
    getline(myFile, buffer);
    output.append("\n" + buffer);
    if (buffer == "data") {
      isData = true;
    }
  }
  getline(myFile,buffer);
  output.append("\n" + buffer);
  cout << output << endl;

  while (!myFile.eof()) {
    myFile >> no;
    myFile >> nama;
     if ( !myFile.eof() ) {
        cout << no << "\t" << nama << endl;
    jumlahData++;
    }
  }
  cout << "jumlah data : " << jumlahData<< endl;

  return 0;
}
/*ifstream: Gunakan ketika Anda hanya perlu membaca data dari file.*/
/*ofstream: Gunakan ketika Anda hanya perlu menulis data ke file.*/
/*fstream: Gunakan ketika Anda perlu melakukan kedua operasi, yaitu membaca dan
 * menulis data ke file yang sama.*/
