#include <iostream>
#include <ostream>

using namespace std;

int main() {
  // create array
  /*int nilai[5] = {0,1,2,3,4};*/
  int nilai[5];

  cout << nilai << endl; // output nya adalah address dari nilai
  cout << nilai[0] << endl;
  cout << nilai[1] << endl;
  cout << nilai[2] << endl;
  cout << nilai[3] << endl;
  cout << nilai[4] << endl;

  nilai[0] = 0;
  nilai[1] = 1;
  nilai[2] = 2;
  nilai[3] = 3;
  nilai[4] = 4;

  // address
  cout << &nilai[0] << " nilainya adalah: " << nilai[0] << endl;
  cout << &nilai[1] << " nilainya adalah: " << nilai[1] << endl;
  cout << &nilai[2] << " nilainya adalah: " << nilai[2] << endl;
  cout << &nilai[3] << " nilainya adalah: " << nilai[3] << endl;
  cout << &nilai[4] << " nilainya adalah: " << nilai[4] << endl;
  // akses nilai dan mengubah nilai dari address
  //  contoh dibawah mengubah nilai dari variable array nilai[2]
  //  + 2 karena awal dari address array int adalah 0 dan kalau ditambah satu
  //  itu berisi nilai 4 jadi kita butuh +2 untuk menghasilkan nilai 8 ,
  //  8 merupakan akir dari addres variable &nilai[0]
  int *ptr = nilai;
  *(ptr + 2) = 6;
  nilai[3] = 7;
  // address
  cout << endl;
  cout << &nilai[0] << " nilainya adalah: " << nilai[0] << endl;
  cout << &nilai[1] << " nilainya adalah: " << nilai[1] << endl;
  cout << &nilai[2] << " nilainya adalah: " << nilai[2] << endl;
  cout << &nilai[3] << " nilainya adalah: " << nilai[3] << endl;
  cout << &nilai[4] << " nilainya adalah: " << nilai[4] << endl;

  cout << endl;
  cout << "ukuran array = " << sizeof(nilai) << " byte" << endl;
  cout << "jumlah member array = "<< sizeof(nilai)/sizeof(int)<< endl;
  return 0;
}
