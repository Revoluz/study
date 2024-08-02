#include <iostream>
#include <ostream>
using namespace std;

int main() {
  // rumus
  // f_n = f_n1 - f_n2
  int n;
  int f_n;
  int f_n1;
  int f_n2;

  cout << "program deret fibonaci" << endl;
  cout << "Masukan nilai ke-n:";
  cin >> n;
  /*f_n1 = 1;*/
  /*f_n2 = 0;*/
  //custom fibonaci
  cout << "Masukan fn1 =";
  cin >> f_n1;
  cout<< "Masukan fn2 =";
  cin >> f_n2;
  for (int i = 1; i < n; i++) {
    f_n = f_n1+f_n2;
    f_n2 = f_n1;
    f_n1 = f_n;
    cout<< f_n<<endl;
  }
  cin.get();
  return 0;
}
