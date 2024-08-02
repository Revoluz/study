#include <iostream>

using namespace std;
// default argument
double volume_kubus(double n=1, double l =3, double t = 2);
/*double volume_kubus(double n, double l, double t = 2);*/
int main() {
  cout << "volume kubus:" << volume_kubus(3, 4, 5) << endl;
  cout << "volume kubus:" << volume_kubus(3, 4) << endl;
  cout << "volume kubus:" << volume_kubus() << endl;
  return 0;
}
double volume_kubus(double n, double l, double t) { return n * l * t; }
