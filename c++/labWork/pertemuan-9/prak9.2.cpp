#include <iostream>
using namespace std;
int faktorial(int n);
int main()
{
  int n;
  cout << "Masukan N=";
  cin >> n;
  cout << "Nilai factorial " << n << " adalah = "
       << faktorial(n) << endl;
  return 0;
}
int faktorial(int n)
{
  int nilai = n;
  if (n == 1)
    return nilai;
  else
  {
    return n * faktorial(n - 1);
  }
}

// menghitung faktorial