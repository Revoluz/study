#include <iostream>
using namespace std;

int main(){
  // int x=4,y=0;
  // if (x != 0)
  // {
  //   y = 3;
  // }
  // cout <<y<<endl;
  bool x=true,y=false ,z=true;
  if (x)
  {
    if (y)
    {
      z = false;
    }
  
  else
  {
    y = true;
  }
  }
  cout <<x<<y<<z<<endl;
}