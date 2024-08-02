#include <iostream>
#include <ostream>

using namespace std;

void fungsi(int &);
void kuadrat(int &);
int main() {
  int a = 5;
  cout << "address a " << &a << endl;
  cout << "nilai a " << a << endl;
  /*int &b = a;*/
  // nilai dan alamat nya akan sama dan sama saja tidak membuat variable baru 
  // reference &b seperti alias a alamat a dan b juga sama 
  /*cout << "address b " << &b << endl;*/
  /*cout << "nilai b " << b << endl;*/
  fungsi(a);
  kuadrat(a);

  cout << "nilai a " << a << endl;
  return 0;
}
void fungsi(int &b){
// reference &b seperti alias a alamat a dan b juga sama 
  cout << "address b " << &b << endl;
  cout << "nilai b " << b << endl;
}
void kuadrat(int &valRef){
  valRef = valRef * valRef;
}
