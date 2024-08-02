#include <algorithm>
#include <array>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */

  int arr_length, query;
  cin >> arr_length >> query;
/*vector<vector<TipeData>> nama_vektor(jumlah_baris, vector<TipeData>(jumlah_kolom));*/
      /*vector<vector<string>> puisi(3, vector<string>(4)); // Membuat puisi dengan 3 baris dan 4 kata per baris*/

  vector<vector<int>> arr(arr_length);
  for (int i = 0; i < arr_length; i++) {
    int size;
    cin >> size;
    /*.resize(size) mengubah ukuran vektor tersebut menjadi size elemen.
Jika size lebih besar dari ukuran vektor saat ini: Elemen-elemen baru yang ditambahkan akan diinisialisasi dengan nilai default untuk tipe data yang bersangkutan (dalam kasus ini, integer, biasanya 0).
Jika size lebih kecil dari ukuran vektor saat ini: Elemen-elemen yang berlebih akan dihapus. */
    arr[i].resize(size);
    for (int j = 0; j < size; j++) {
      cin >> arr[i][j] ;
    }
  }
  for ( int i =1; i <=query;i++) {
    int row,col;
    cin >> row>> col;
    cout <<arr[row][col]<< endl;
  }
  return 0;
}
/*
 Misalkan Anda memiliki arr dengan ukuran awal 3, dan setiap elemennya memiliki ukuran 2. Setelah eksekusi arr[1].resize(5), maka:

Baris pertama dari arr tetap tidak berubah.
Baris kedua dari arr akan memiliki ukuran 5, dengan 3 elemen pertama sama seperti sebelumnya, dan 2 elemen terakhir diinisialisasi dengan nilai 0.
Baris ketiga dari arr juga tetap tidak berubah.
 * */


/*Jika Anda ingin menghindari penggunaan resize(), Anda bisa menggunakan push_back() untuk menambahkan elemen satu per satu, tetapi perlu diperhatikan bahwa ini bisa kurang efisien untuk kasus di mana Anda tahu ukuran vektor sebelumnya.*/

