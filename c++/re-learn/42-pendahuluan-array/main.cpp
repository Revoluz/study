#include <iostream>
using namespace std;
int main() {
  int nilai[5];
  cout << nilai << endl; // berisi alamat
  // Nilai array: Array nilai diisi dengan nilai sampah, yang mengacu pada data
  // yang sudah ada di lokasi memori yang dialokasikan untuk array tersebut
  // sebelumnya, dan ini tidak dapat diprediksi.
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
  cout << &nilai[0] << " nilainya adalah: " << nilai[0] << endl;
  cout << &nilai[1] << " nilainya adalah: " << nilai[1] << endl;
  cout << &nilai[2] << " nilainya adalah: " << nilai[2] << endl;
  cout << &nilai[3] << " nilainya adalah: " << nilai[3] << endl;
  cout << &nilai[4] << " nilainya adalah: " << nilai[4] << endl;
  // mengambil data dari address
  int *ptr = nilai;
  // 1 integer == 4 byte
  // 2 integer == 8 byte
  // access array from address memory
  *(ptr + 2) = 6;
  nilai[3] = 9;
  cout << endl;
  cout << &nilai[0] << " nilainya adalah: " << nilai[0] << endl;
  cout << &nilai[1] << " nilainya adalah: " << nilai[1] << endl;
  cout << &nilai[2] << " nilainya adalah: " << nilai[2] << endl;
  cout << &nilai[3] << " nilainya adalah: " << nilai[3] << endl;
  cout << &nilai[4] << " nilainya adalah: " << nilai[4] << endl;
  cout << endl;
  // get array size
  cout << "Ukuran array = " << sizeof(nilai) << " byte" << endl;
  cout << "Ukuran integer = " << sizeof(int) << " byte" << endl;
  cout << "Jumlah member array = " << sizeof(nilai) / sizeof(int) << endl;
  for (int i = 0; i < sizeof(nilai) / sizeof(int); i++) {
    cout << (nilai[i] *=2) << endl;
  }
  for (int i = 0; i < sizeof(nilai) / sizeof(int); i++) {
    cout << nilai[i] << endl;
  }
  cout << "Hello"<<endl;
  return 0;
}
