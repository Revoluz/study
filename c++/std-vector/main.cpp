#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> angka;
  int nilai;
  cout << "masukan Nilai :";
  cin >> nilai;
  for (int i = 0; i < nilai; i++) {
    angka.push_back(i);
  }
  for (int printNum : angka) {
    cout << printNum + 1 << endl;
  }
  for (int printNum : angka) {
    cout << printNum  << endl;
  }
  cout << endl;
  return 0;
}
