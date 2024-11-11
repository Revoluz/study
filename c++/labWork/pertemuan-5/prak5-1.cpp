#include <iostream>
using namespace std;

int main(){
  const float LIMIT = 60.0;
  int idMobil  ;
  float kecepatan;

  cout <<"Masukan nomor Mobil dan kecepatan mobil: ";
  cin >> idMobil >> kecepatan;

  if (kecepatan > LIMIT) {
    cout << "Mobil"<< idMobil<<"Melebihi batas kecepatan. "<<endl;

  }
  cout << "Akhir dari program"<<endl;
  return 0;
}
