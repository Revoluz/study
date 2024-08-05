#include <ios>
#include <iostream>
#include <fstream> // ofstream,ifstream,fstream

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
/*ifstream*/
/*Input File Stream: Digunakan secara khusus untuk membaca data dari sebuah file.*/
/*Operasi: Memungkinkan Anda membaca karakter, kata, baris, atau blok data dari file.*/
/*Contoh penggunaan: Membaca data dari file konfigurasi, membaca log file, atau membaca input dari pengguna yang disimpan dalam file.*/
/*ofstream*/
/*Output File Stream: Digunakan secara khusus untuk menulis data ke sebuah file.*/
/*Operasi: Memungkinkan Anda menulis karakter, kata, baris, atau blok data ke file.*/
/*Contoh penggunaan: Menulis data ke file log, membuat file laporan, atau menyimpan data hasil perhitungan ke file.*/
/*fstream*/
/*File Stream: Merupakan kelas yang lebih umum dan dapat digunakan untuk membaca dan menulis data ke sebuah file.*/
/*Operasi: Menggabungkan fungsionalitas ifstream dan ofstream, sehingga Anda dapat melakukan kedua operasi pada file yang sama.*/
/*Contoh penggunaan: Membaca data dari sebuah file, memodifikasi data, lalu menulis kembali data yang sudah dimodifikasi ke file yang sama.*/
