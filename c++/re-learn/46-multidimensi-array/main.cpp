#include <iostream>
using namespace std;
void printArray(int *ptrArray, int baris, int kolom) {
  int index = 0;
  for (int i = 0; i < baris; i++) {
    cout << "[ ";
    for (int j = 0; j < kolom; j++) {
      cout << *(ptrArray + index);
      index++;
    }
    cout << " ]";
    cout << endl;
  }
}

int main() {
  // array multidimensi
  // array[baris][kolom]
  int arrayMD[2][3] = {1, 2, 3, 4, 5, 6};
  /*cout << arrayMD[0][0] << " " << arrayMD[0][1] << " " << arrayMD[0][2] <<
   * endl;*/
  /*cout << arrayMD[1][0] << " " << arrayMD[1][1] << " " << arrayMD[1][2] <<
   * endl;*/
  printArray(*arrayMD, 2, 3);
  cout << arrayMD << endl
       << arrayMD[0] << endl
       << &arrayMD[0][0] << endl
       << &arrayMD[0][1] << endl
       << &arrayMD[1][0] << endl
       << &arrayMD[1][1] << endl
       << *arrayMD << endl;
  return 0;
}
/*Array dua dimensi membutuhkan dereferensi (*arrayMD) atau penggunaan ukuran kolom eksplisit (int arr[][kolom]), karena setiap elemen pada tingkat pertama adalah array lagi, bukan nilai tunggal.*/
// synatx di bawah sama saja
/*void printArray(int ptrArray[][3], int baris) {*/
/*    for (int i = 0; i < baris; i++) {*/
/*        cout << "[ ";*/
/*        for (int j = 0; j < 3; j++) {*/
/*            cout << ptrArray[i][j] << " ";*/
/*        }*/
/*        cout << "]" << endl;*/
/*    }*/
/*}*/
/**/
/*int main() {*/
/*    // Array multidimensi biasa*/
/*    int arrayMD[2][3] = {{1, 2, 3}, {4, 5, 6}};*/
/**/
/*    // Memanggil fungsi printArray*/
/*    printArray(arrayMD, 2);*/
/**/
/*    return 0;*/
/*}*/
/*Dalam C++, saat mendefinisikan parameter fungsi yang menerima array multidimensi, ukuran kolom harus ditentukan, tetapi ukuran baris tidak harus ditentukan (dan bahkan tidak boleh ditentukan).*/
