#include <iostream>
#include <array>
#include <string>
using namespace std;

int main(){
  array<bool, 4>  boolean ={1,0,1,0};
  cout << boolean[3] << endl;
  boolean[3]=1;
  cout << boolean[3] << endl;
  string nama[] = {"Ahmad","Fadhil","Fanani"};
  cout <<sizeof(nama)/32<<endl;

  for (int i = 0; i < sizeof(nama)/32; i++)
  {
    cout<<nama[i]<<endl;
  }
  array<int, 10> nilai;

  cout << boolean.size()<<endl;
  return 0;
}