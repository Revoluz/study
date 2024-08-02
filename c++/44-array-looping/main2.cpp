#include <array>
#include <iostream>

using namespace std;

int main() {
  //array library
  array<int, 10> arrayNilai= {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  cout << "address array:" << &arrayNilai[4] << endl;
  // looping array
  for (int nilai : arrayNilai) {
    // addressnya akan konstan jadi hanya menggunakan satu variable yaitu
    // variable nilai
    cout << "address " << &nilai << " nilainya: " << nilai << endl;
    nilai = 1; // tidak akan berpengaruh dikarenakan variable nilai akan selalu
               // diupdate
  }
  cout << endl;
  for (int &nilaiRef : arrayNilai) {
    nilaiRef *=2; 
    // jika menggunakan &(reference) maka address yang digunakan adalah address
    // dari arrayNilai atau variable &nilaiRef sama dengan variable arrayNilai 
    cout << "address " << &nilaiRef << " nilainya: " << nilaiRef << endl;
  }
  cout << "array 2: "<<endl;
   for (int &nilaiRef : arrayNilai) {
    cout << "address " << &nilaiRef << " nilainya: " << nilaiRef << endl;
  } return 0;
}
