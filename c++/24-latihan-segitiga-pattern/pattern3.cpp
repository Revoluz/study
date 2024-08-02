#include "iostream"

using namespace std;

int main() {
  int n;
  cout << "Masukan Panjang Pola : ";
  cin >> n;
  cout << "Pola 5\n";
  for (int i = 1; i <= n; i++) {
    for (int j = n; j > i; j--) {
      cout << " ";
    }
    for (int k = 1; k <= (i * 2 - 1); k++) {
      cout << "*";
    }
    cout << endl;
  }
  cout << "Pola 6\n";
  for (int i = 1; i <= n; i++) {
    /*cout << "*" << endl;*/
    for (int k = 1; k < i; k++) {
      cout << " ";
    }
    for (int j = n; j >= (2*i-n); j--) {
      cout << "*";
    }
    cout << endl;
  }
  cout << "Pola 7\n";
  for (int i = 1; i <= n; i++) {
    for (int j = n; j > i; j--) {
      cout << " ";
    }
    for (int k = 1; k <= (i * 2 - 1); k++) {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = 2; i <= n; i++) {
    /*cout << "*" << endl;*/
    for (int k = 1; k < i; k++) {
      cout << " ";
    }
    for (int j = n; j >= (2*i-n); j--) {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}
