#include <iostream>
using namespace std;

int main()
{
  int number,result =1;
  number = 5;
  for (int i = 1; i <= number; i++)
  {
    result *= i ;
    // temp = result;
    cout << result<<endl;
  }
  

  return 0;
}