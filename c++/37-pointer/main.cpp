
#include <iostream>
//sederhananya pointer merupakan variable yang menyimpan alamat variable yang ditunjuk tetapi memori nya berbeda dengan variable yang ditunjukdan dapat mengeluarkan nilai dari variable yang ditunjuk
using namespace std;

int main() {
  int a = 5;
  // int a mempunyai nilai dan addres(alamat)
  // alamat dari a: 0x7ffd93ce14ac
  // Pointer
  // pointer akan selalu bertipe data integer
  /*int *aPtr = &a; membuat pointer*/
  int *aPtr = nullptr; // membuat pointer/addres kosong
  aPtr = &a; // mengambil alamat dan nilai dari a
  cout << "nilai dari a: " << a << endl;
  cout << "alamat dari a : " << &a << endl; // berisi alamat memori 
  cout << "mengeluarkan alamat dari a melalui pointer: " << aPtr << endl; // berisi alamat memori 
  cout << "mengeluarkan alamat dari aPtr melalui pointer: " << &aPtr << endl; // berisi alamat memori 

  a=10;
  //dereferencing, mengambil data dari sebuah pointer
  cout << "Mengambil nilai dari pointer aPtr : " << *aPtr << endl;
  // a tersebung alamat nya dan nilai nya dengan *aPtr
  return 0;
}
