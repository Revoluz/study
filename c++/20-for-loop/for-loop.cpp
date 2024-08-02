#include <iostream>

using namespace std;

int main() {
  /*for (inisialisasi, loop kondisi , increment)  */
  cout << "awal for loop1 \n";
  for (int i = 1; i <= 10; i++) {
    cout << i << endl;
  }
  cout << "awal for loop2 \n";
  for (int i = 1; i <= 10; i += 2) {
    cout << i << endl;
  }
  cout << "awal for loop3 \n";
  for (int i = 1; i >= -10; i--) {
    cout << i << endl;
  }
  cout << "awal for loop4 \n";
  int total = 0;
  for (int i = 1; i <= 10; total += i,i++) {
    cout << i << " || " << total <<endl;
  }
  cout << "akhir dari program \n";
  cin.get();
  return 0;
}
