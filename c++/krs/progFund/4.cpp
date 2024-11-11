#include <iostream>
using namespace std;
int main()
{
  // Declaration and initialization
  int x = 4;
  int y = -10;
  int angkaint = 5;
  float angkafloat = 5.7;

  // Applying plus and minus operator on variable x
  cout << "Using plus operator on x: " << +x << endl;
  cout << "Using minus operator on x: " << -x << endl;
  // Applying plus and minus operator on variable y
  cout << "Using plus operator on y: " << +y << endl;
  cout << "Using minus operator on y: " << -y << endl;
  cout << 3 % 7 << endl; // 3
  angkaint += angkafloat;
  cout << angkaint << endl;
  cout << typeid(angkaint).name()<<endl;
  cout << 'A'+2<<endl;
  return 0;
}
