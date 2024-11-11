#include <iostream>
using namespace std;
void fungsi(int &);
void kuadrat(int &);

int main(){
  int a =5;
  cout << "Address dari a "<< &a<<endl;
  cout << "nilai dari a "<< a <<endl;
  kuadrat(a);
  cout << "Nilai dari a "<< a<<endl;
}

void fungsi(int &b){
  cout << "Address dari b "<< &b<<endl;
  cout << "nilai dari b "<< b <<endl;
}
void kuadrat(int &nilaiRef){
  nilaiRef = nilaiRef*nilaiRef;
}
