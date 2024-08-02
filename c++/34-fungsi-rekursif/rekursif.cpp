#include <iostream>
using namespace std;

int pangkatIterasi(int a, int b) {
  int hasil = a;
  for (int i = 1; i < b; i++) {
    hasil = hasil * a;
  }
  return hasil;
}
// tutorial
/*https://youtu.be/EtyLyC8PHTA?si=52KD9mZ-jrF0iUWs&t=743 */
int pangkatRekursif(int a, int b) {
  if (b <= 1) {
    cout << "akhri dari rekursif\n";
    return a;
  } else {
    return a * pangkatRekursif(a, (b - 1));
  }
}
int main() {
  int a, b;
  cout << "masukan angka: ";
  cin >> a;
  cout << "masukan pangkat: ";
  cin >> b;
  cout << "hasil dari iterasi =" << pangkatIterasi(a, b) << endl;
  cout << "hasil dari iterasi rekursif =" << pangkatRekursif(a, b) << endl;
  return 0;
}
