#include <iostream>
using namespace std;

int main(){
  int column=8,row=8;
  for (int i = 1; i <= row; row--)
  {
    for (int i = 1; i <= row; i++)
    {
      cout << i;
    }
    cout<< endl;
    
  }
  int baris =10;
  for (int i = 1; i <= baris; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j;
    }
    cout <<endl;
  }
  baris = 10;
  for (int i = 1; i <= baris; baris--)
  {
    for (int j = 1; j <= baris; j++)
    {
      cout << j;
    }
    cout << endl;
  }
  baris = 10;
  for (int i = 1; i <= baris; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j;
    }
    cout << endl;
  }
}