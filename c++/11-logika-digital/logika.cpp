#include <iostream>

using namespace std;

int main() {
  int a = 3;
  int b = 2;
  bool hasil;

  // operator logika : not, and, or
  // not/kebalikan
  hasil = !(a == 3);
  cout << hasil << endl;
  // and : kedaua nilai harus benar untuk menghasilkan true
  cout << "untuk and" << endl;
  hasil = (a == 3) and (b == 2); // true and true
  cout << hasil << endl;
  hasil = (a == 9) and (b == 2); // false and true
  cout << hasil << endl;
  hasil = (a == 3) && (b == 8); // true and false
  cout << hasil << endl;
  hasil = (a == 1) && (b == 6); // false and false
  cout << hasil << endl;

  // or : jika salah satunya true maka hasilnya true
  cout << "untuk or" << endl;
  hasil = (a == 3) || (b == 2); // true and true
  cout << hasil << endl;
  hasil = (a == 9) || (b == 2); // false and true
  cout << hasil << endl;
  hasil = (a == 3) or (b == 8); // true and false
  cout << hasil << endl;
  hasil = (a == 1) or (b == 6); // false and false
  cout << hasil << endl;
  cin.get();
  return 0;
}
