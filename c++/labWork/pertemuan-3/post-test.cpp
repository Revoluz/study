#include <iostream>
#include <string>
using namespace std;

int main() {
  int day, month, year;
  string nama, tempat;
  char kelamin;
  cout << "Masukan Nama";
  cin >> nama;
  cout << "Masukan Hari Bulan Tahun Lahir";
  cin >> day >> month >> year;
  cout << "Masukan Jenis Kelamin L/P ";
  cin >> kelamin;
  cout << "========== KTP ==========" << endl;
  cout << "= Nama :" << nama << endl;
  cout << "= Tanggal Lahir :" << day << "-" << month << "-" << year << endl;
  cout << "= Kelamin :" << kelamin << endl;
  return 0;
}
