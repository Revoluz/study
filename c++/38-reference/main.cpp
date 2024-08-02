#include <iostream>

 /*perbedaan reference dengan pointer yaitu reference seperti alias yaitu menduplikat nilai dan alamat ke variable lain contoh b& =a yaitu variable b memiliki alamat dan nilai yang sama dengan variable a jika variable a nilai diubah maka variable b juga berubah begitu sebaliknya */
using namespace std;

int main() {
  // variable
  int a = 5;

  cout << "nilai dari a " << a << endl;
  cout << "address dari a " << &a << endl;
// refrence
  int &b = a; // alamat variable b == alamat variable a
  // nilai dan alamat nya akan sama dan sama saja tidak membuat variable baru
  cout << "nilai dari b "<< b << endl;
  cout << "address dari b " << &b << endl;

  b = 10; // merubah nilai variable b juga akan merubah nilai variable a
  cout << "nilai dari a "<< a << endl;
  cout << "nilai dari b "<< b << endl;

  a = 2; // merubah nilai variable a juga akan merubah nilai variable b
  cout << "nilai dari a "<< a << endl;
  cout << "nilai dari b "<< b << endl;


  return 0;
}
