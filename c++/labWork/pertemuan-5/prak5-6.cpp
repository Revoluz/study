#include <iostream>
using namespace std ;

int main(){
  int angka;
  cout << "Masukan Skormu (0-100): ";
  cin >> angka;

  switch(angka/10){
    case 10:
    case 9:
    cout <<"Nilaimu adalah A."<<endl;
    break;
    case 8:
    cout <<"Nilaimu adalah B."<<endl;
    break;
    case 7:
    cout <<"Nilaimu adalah C."<<endl;
    break;
    case 6:
    cout <<"Nilaimu adalah D."<<endl;
    break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
    cout<<"Nilaimu adalah E."<<endl;
    break;
  }
}
