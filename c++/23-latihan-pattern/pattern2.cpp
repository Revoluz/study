#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Masukan Panjang Pola : ";
  cin >> n;

  cout << "Pola 3\n";
  for (int i = 1; i <= n; i++) {
    /*cout << "*" << endl;*/
    for (int k = 1; k < i; k++) {
      cout << " ";
    }
    for (int j = n; j >= i; j--) {
      cout << "*";
    }
    cout << endl;
  }
  
  cout << "Pola 4\n";
  for (int i = 1; i <= n; i++) {
    /*cout << "*" << endl;*/
    for (int k = n; k > i; k--) {
      cout << " ";
    }
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    cout << endl;
  }
  cin.get();
  return 0;
}
