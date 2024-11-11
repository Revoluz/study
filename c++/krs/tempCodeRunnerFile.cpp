#include <iostream>
using namespace std;

int main()
{
  int x = 13;
  int y = 4;
  int z = 1.4;
  y = 4.5;
  z = z % x;
  z = (y + 5) * (x % 4);
  cout << z;
  return 0;
}