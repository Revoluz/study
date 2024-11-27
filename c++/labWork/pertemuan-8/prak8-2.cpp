#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int a, b;
  cout << "Nilai A = ";
  cin >> a;
  cout << "Nilai B = ";
  cin >> b;
  cout << "Nilai terbesar antara A dan B = " << fmax(a, b) << endl;
  cout << "Nilai terkecil antara A dan B = " << fmin(a, b) << endl;
  cout << "Pangkat dari A^B (" << a << "^" << b << ")" << pow(a, b) << endl;
  return 0;
}