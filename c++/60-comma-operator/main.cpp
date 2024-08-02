#include <iostream>
#include <string>
/*evaluates its first operand and discards the result, and then evaluates the
 * second operand and returns this value (and type); there is a sequence point
 * between these evaluations*/
using namespace std;
void printData(int val){
  cout << val << endl;
}
int main() {
  // ini bukan comma operator
  /*int a,b,c,d;*/
  /*void fungsi(int a,int b);*/
  /*int a[5] = {1,2,3,4,5};*/
  int a;
  int b;
  int c;
  a = (b = 1); // comma operator
  c = 2;
  /*a = (b + c);*/
  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
  a = (b = 1, c = 3); // comma operator
  /*a = (b + c);*/
  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
  a = (b = 1, c = 3, (b + c)); // comma operator
  /*a = (b + c);*/
  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
  a = (b = 1, c = 3, cout << "b: " << b << endl, cout << "c: " << c << endl, (b + c)); // comma operator
  cout << "a: " << a << endl;
   a = (b = 1, c = 3, printData(b),printData(c), (b + c)); // comma operator
  cout << "a: " << a << endl;
 return 0;
}
