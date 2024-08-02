#include <iostream>

using namespace std;

/*int kuadrat(int value){*/
/*return value*value;*/
/*}*/
// fungsi prototipe
void fungsi(int *);
void kuadrat(int *);

int main() {
  int a = 10;
  cout << "address a " << &a << endl;
  cout << "nilai a " << a << endl;
  fungsi(&a); // fungsi dengan input address / memberikan alamat memori
  cout << "nilai a " << a << endl;
  kuadrat(&a);
  /*a= kuadrat(a);*/
  cout << " nilai a : " << a << endl;
  return 0;
}

void fungsi(int *b) { // argument yang berisi pointer untuk menangkap address
  // jika menggunakan pointer a dan b memiliki alamat yang berbeda
  // tetapi saling terkoneksi
  cout << "address b " << &b << endl;
  cout << "nilai b berisi alamat a" << b << endl;   
  cout << "nilai b" << *b << endl;                // dereferencing
  *b = 2 * (*b);
}

void kuadrat(int *valPtr) { *valPtr = (*valPtr) * (*valPtr); }

/*Karena valPtr dan &a menunjuk ke alamat memori yang sama, modifikasi yang
 * dilakukan pada *valPtr di dalam fungsi kuadrat() akan secara permanen
 * mengubah nilai variabel a.*/
/**/
/*Dengan kata lain, meskipun tidak ada nilai yang di-return dari fungsi
 * kuadrat(), perubahan nilai a tetap terjadi karena kamu telah memodifikasi
 * nilai variabel secara langsung melalui pointer.*/
