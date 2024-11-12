#include <array>
#include <iostream>
using namespace std;

void printArray(array<int, 4> nilai) {
  const int size = 4;
  for (int i = 0; i < size; i++) {
    /*nilai[i] = i;*/
    cout << "nilai [" << i << "]" << " = " << nilai[i]
         << " address : " << &nilai[i] << endl;
  } // ukuran array
  /*cout << "Ukuran : " << nilai.size() << endl;*/
  /*cout << "address awal : " << nilai.begin() << endl;*/
  /*// jika ada 4 item/element di dalam array maka fungsi end() akan mengambil*/
  /*// address item/element ke 5*/
  /*cout << "address akhir : " << nilai.end() << endl;*/
  /*cout << "Nilai ke 3 : " << nilai.at(3) << endl;*/
}
void increment(array<int, 4> nilai) {
  // hanya mengubah nilai di dalam function tidak berpengaruh pada variable
  // nilai di function main
  const int size = 4;
  for (int i = 0; i < size; i++) {
    nilai[i] += 1;
    cout << "nilai [" << i << "]" << " = " << nilai[i]
         << " address : " << &nilai[i] << endl;
  }
}
void incrementRef(array<int, 4> &nilai) {
  // mengubah nilai
  const int size = 4;
  for (int i = 0; i < size; i++) {
    nilai[i] += 2;
    cout << "nilai [" << i << "]" << " = " << nilai[i]
         << " address : " << &nilai[i] << endl;
  }
}
int main() {
  // array std
  const int size = 4;
  // array<int,jumlah array> nama array
  array<int, size> nilai = {0, 1, 2, 3};
  /*cout << "address : " << nilai;*/
  cout << "Tidak menggunakan reference" << endl;
  increment(nilai);
  cout << "Print Array" << endl;
  printArray(nilai);
  cout << endl;
  cout << "Menggunakan reference" << endl;
  incrementRef(nilai);
  cout << "Print Array" << endl;
  printArray(nilai);
  return 0;
}
