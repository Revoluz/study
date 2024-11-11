#include <iostream>
using namespace std;

void kuadrat(int *);
int kuadrat(int a);
void fungsi(int *);
int main(){
  int a=5;
  kuadrat(&a);
  cout << "Nilai a "<< a<<endl;
  // tanpa pointer
  a = kuadrat(a);
  cout << "Nilai a "<< a<<endl;
  fungsi(&a);
}
void kuadrat(int *valPtr){
  *valPtr = (*valPtr) * (*valPtr);
}
int kuadrat(int a){
  a = a*a;
  return a;
}
void fungsi(int *b){
  cout <<"address b "<< b<<endl;
  cout <<"nilai b "<< *b<<endl;
}
