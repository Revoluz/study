#include <iostream>
#include <ostream>
using namespace std;

int kuadrat(int x) {
  int y;
  y = x * x;
  return y;
}
int tambah(int a, int b) {
  int c;
  c = a + b;
  return c;
}
int main(int argc, char *argv[]) {
  int input, hasil,a,b,hasil2;
  cout << "nilai kuadrat dari: ";
  cin >> input;
  hasil = kuadrat(input);
  cout << "hasil dari kuadrat " << input << " adalah " << hasil << endl;
  cout << "masukan nilai a: ";
  cin >> a ;
  cout << "masukan niali b: ";
  cin >> b;
  hasil2 = tambah(a,b);
  cout << "hasil dari operasi tambah adalah " << hasil2 << endl;
  return 0;
}
