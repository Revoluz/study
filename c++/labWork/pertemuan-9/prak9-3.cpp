#include <iostream>
using namespace std;

int pangkat(int a,int b);

int main(){
  int a,b,hasil;
  cout << "Masukan basis angka";
  cin >> a;
  cout << "Masukan pangkat";
  cin>> b;
  hasil = pangkat(a,b);
  cout <<"Hasil : "<<hasil<< endl;
}
int pangkat(int a,int b){
  if (b==1)
  {
    return a;
  }else{
    return a *pangkat(a,b-1);
  }
  
}