#include <iostream>
using namespace std;

int main(){
  int angka, pembagi;
  cout << "Masukan angka, pembagi";
  cin >> angka >>pembagi;
  if ((angka % pembagi)== 0 ) {
    cout << angka <<" dapat dibagi dengan "<< pembagi<<endl;  
  }else {
  cout << angka <<" tidak dapat dibagi dengan "<< pembagi<<endl;
  }

  return 0;
}
