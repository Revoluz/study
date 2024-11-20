#include <iostream>
using namespace std;

void printData(int val) { cout << val << endl; }
int main() {
  int a;
  int b;
  int c;

  // yang terakhir akan ditaurh di varoan;e a
  a = (b = 1, cout << b << endl, c = 2, printData(c), (b + c));
  cout << a << endl;

  return 0;
}
