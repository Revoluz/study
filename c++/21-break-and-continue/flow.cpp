#include <iostream>
#include <ostream>

using namespace std;

int main() {
  for (int i = 0; i <= 10; i++) {
    if (i == 5) {
      /*break; // langsung keluar dari for*/
      continue; // langsung melanjutkan loop nya tidak menjalankan syntax yang
                // ada di bawahnya jaid cout i tidak dijalankan langsung
                // mengulang loop
    }
    cout << i << endl;
  }

  // jika menggunakan while
  int i = 0;
  while (i <= 10) {

    if (i == 5) {
      break;    // langsung keluar dari for
      continue; // jika menggunakan continue di while akan bermasalah
                // dikarenakan i++ di skip jadi nilai i akan tetap 5 jadi i++
                // harus diatas/sebelum continue
    }
    cout << i << endl;
    i++;
  }
  cout << "akhirnya" << endl;
  cin.get();
  return 0;
}
