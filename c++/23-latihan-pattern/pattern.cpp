#include <iostream>
#include <ostream>
using namespace std;

int main() {
  int n;
  cout << "Masukan Panjang Pola : ";
  cin >> n;

  cout << "Pola 1\n";
  for (int i = 1; i <= n; i++) {
    /*cout << "*" << endl;*/
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    cout << endl;
  }
  cout << "Pola 2\n";
  for (int i = 1; i <= n; i++) {
    /*cout << "*" << endl;*/
    for (int j = n; j >= i; j--) {
      /*cout <<j<<endl;*/
      cout << "*";
    }
    cout << endl;
  }
  cin.get();
  return 0;
}
