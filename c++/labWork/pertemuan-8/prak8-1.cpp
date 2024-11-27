#include <iostream>
#include <string.h>
using namespace std;
int main(){
  char info[30];
  char hello[] = {'h','e','l','l','o'}; 
  string test;
  // prebuild function string.h
  strcpy(info, "Informatika FTI UAD");
  cout << info << endl;
  cout << info[1] << endl;
  cout << "Panjang karakter = " << strlen(info) << endl;
  strcpy(info, hello);

  cout << info << endl;
  cout << info[1] << endl;
  cout << "Panjang karakter = "<<strlen(info)<< endl;
  return 0;
}
// Fungsi Header <string.h>
// Header <string.h> menyediakan berbagai fungsi manipulasi string bawaan dalam bahasa C, yang juga digunakan dalam C++.

// Fungsi-Fungsi Penting dalam <string.h>:
// strcpy(): Menyalin string dari sumber ke tujuan.
// strlen(): Menghitung panjang string (tidak termasuk karakter null \0).
// strcmp(): Membandingkan dua string secara leksikografis.
// strcat(): Menggabungkan dua string.
// strchr(): Mencari karakter dalam string.
// strstr(): Mencari substring dalam string.
// strncpy(): Menyalin string dengan panjang maksimum tertentu.
// strncat(): Menggabungkan string dengan panjang maksimum tertentu.
// Catatan Penting:
// Keamanan:

// Fungsi strcpy tidak memeriksa batas ukuran buffer destination. Jika source lebih besar dari kapasitas destination, hal ini dapat menyebabkan buffer overflow.
// Sebagai alternatif yang lebih aman, gunakan strncpy() atau fitur C++ modern seperti std::string.