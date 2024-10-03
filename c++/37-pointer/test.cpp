#include <algorithm>
#include <iostream>

using namespace std;

int main () {
  int a = 5;
  int *aPtr = &a;
  cout << *aPtr << endl;
  *aPtr =10;
  cout << *aPtr<< endl;
  cout << a<< endl;
  return 0;
}
