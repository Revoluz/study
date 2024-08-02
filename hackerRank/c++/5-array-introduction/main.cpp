
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  vector<int> numbers;
  int number;
  cin>> number;
  while (cin >> number) {
    numbers.push_back(number);
  }
  for (int i = (numbers.size()) - 1; 0 <= i; i--) {
    cout << numbers[i] << " ";
  }
  cout << endl;
  return 0;
}


