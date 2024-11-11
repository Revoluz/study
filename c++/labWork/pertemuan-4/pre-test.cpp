#include <iostream>

using namespace std;

int main(){
  int a=10,b=3;
  // operator binary
  cout << a+b<<endl;
  cout << a-b <<endl;
  cout << a*b<<endl;
  cout << a / b << endl;
  cout << a % b << endl; // 1

  // operator unary
  cout << -a << endl;
  cout << +a << endl;
  cout << ++a << endl;
  cout << --a << endl;
  // operator rasional
  cout << (10 > 3) << endl;
  cout << (10 < 3) << endl;
  cout << (10 >= 3) << endl;
  cout << (10 <= 3) << endl;
  cout << (10 != 3) << endl;
  cout << (10 == 3) << endl;
  // operator rasional
  cout << ((10 > 3) && (10 > 3)) << endl;
  cout << ((10 > 3) || (10 > 3)) << endl;
  cout <<  !(10 > 3) << endl;
  cout << 2 + 3 * 4 + 2 << endl; // 16
  cout << (3 < 2) << endl;       // false
  int y=y++;
  cout << y << endl;       // endl
  return 0;
}