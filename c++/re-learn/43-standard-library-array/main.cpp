#include <iostream>
#include <array>
using namespace std;


int main(){
  // array std
  const int size = 4;
  // array<int,jumlah array> nama array
  array <int , size> nilai ;
  /*cout << "address : " << nilai;*/

  for (int i =0; i < size ; i++) {
    nilai[i]= i;
    cout << "nilai [" << i << "]"<< " = " <<"address : " << &nilai[i]<<endl;
  
  }
  cout << endl;
  // ukuran array
  cout << "Ukuran : "<< nilai.size()<< endl;
  cout << "address awal : "<< nilai.begin()<<endl;
  // jika ada 4 item/element di dalam array maka fungsi end() akan mengambil address item/element ke 5 
  cout << "address akhir : "<< nilai.end()<< endl;
  cout << "Nilai ke 3 : "<< nilai.at(3)<<endl;

  return 0;
} 
