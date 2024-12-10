#include <iostream>
using namespace std;
int jumlah_deret(int n){
  if(n ==1){
    return 1;
  }else{
    return jumlah_deret(n-1)+n;
  }
}
int main(){
  int n,result;
  cout << "Masukan deret ke-n";
  cin >> n;
  result = jumlah_deret(n);
  cout << "Jumlah Deret "<< n << "-"<< result<<endl;
}

// penjumlahan deret