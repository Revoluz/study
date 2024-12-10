#include <iostream>
using namespace std;

int jumlah_genap(int a){
  if (a ==1)
  {
    return 0;
  }else{
    if (a %2 ==0)
    {
      return a + jumlah_genap(a-1);
    }else{
      return jumlah_genap(a-1);
    }
    
  }
  
}
int main(){
  int a,hasil;
  cout << "Masukan angka : ";
  cin >> a;
  hasil = jumlah_genap(a);
  cout << "Jumlah Deret Bilangan Genap " << a << "=" << hasil;
  return 0;
}