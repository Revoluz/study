#include <iostream>
using namespace std;

int main(){
  int row  = 8,column = 8;

  for (int i = 1; i <= row; row--)
  {
    for (int i = 1; i <= row; i++)
    {
      cout<<i;
    }

    cout <<endl;
  }
  return 0;
}