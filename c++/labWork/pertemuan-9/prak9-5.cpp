#include <iostream>
using namespace std;
void balik(const string a);
int main()
{
  string str;
  cout << " Ketikan kalimat " << endl;
  getline(cin,str);
  balik(str);
  cout << endl;
  return 0;
}
void balik(string str){
  int numbStr= str.size();
  if (numbStr == 1)
  {
    cout << str;
  }else{
    cout<< str[numbStr-1];
    balik(str.substr(0,numbStr-1));
  }
  
}