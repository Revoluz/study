#include <iostream>

using namespace std;

int main() {
  int a = 1;
  do {
    // lakukan dulu baru looping
    // aksi akan dilakukan minimal sekali
    cout << "ini do" << endl;
    cout << a << endl;
    a++;
  } while (a <= 5);
  cout << "selesai" << endl;
  cin.get();
  return 0;
}
