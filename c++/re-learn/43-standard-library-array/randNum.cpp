#include <iostream>
#include <array>
#include <vector>
#include <string>
using namespace std;

void showNum(vector<int> &n)
{
  for(auto &var : n)
  {
    cout << var <<",";
  }
  cout << endl;
}

int main(){
  int num[]={1,34,64,23,9,32,89};
  vector<int> odd;
  vector<int> even;
  for (int i = 0; i < sizeof(num)/4; i++)
  {
    if (num[i]%2 == 0)
    {
      even.push_back(num[i]);
    }else{
      odd.push_back(num[i]);
    }
    
  }
  cout << "Ganjil" << endl;
  showNum(odd);
  cout << "Genap" << endl;
  showNum(even);
  return 0;
}