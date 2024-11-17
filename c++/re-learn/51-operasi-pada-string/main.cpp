#include <iostream>
#include <string>

using namespace std;

int main() {
  string kata("cat");
  /*string kata = "cat";*/
  cout << kata << endl;
  // mengambil karakter berdasarkan index
  cout << "index ke 0 : " << kata[0] << endl;
  cout << "index ke 1 : " << kata[1] << endl;
  cout << "index ke 2 : " << kata[2] << endl;
  // akan kosong tidak error
  cout << "index ke 3 : " << kata[3] << endl;
  // merubah karakter pada index tertentu
  kata[1] = 'e';
  cout << kata << endl;

  // menyambung, concetination

  string kata2(kata + "ar");
  cout << kata2 << endl;
  string kata3("membahana");
  // perbedaan append dengan kata2(kata + "ar"); yaitu append menempelkan
  // sedangkan kata2(kata + "ar"); berkaitan dengan pembuatan kata
  kata2.append(" " + kata3);
  cout << kata2 << endl;

  string kata4("ahay!!!!");
  kata2 += ' ' + kata4;
  cout << kata2 << endl;

  return 0;
}
