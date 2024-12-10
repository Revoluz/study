#include <iostream>
using namespace std;
int pendapatan(int bulan);
int main()
{
  int hasil, bulan;
  cout << "Masukan jumlah bulan ";
  cin >> bulan;
  hasil = pendapatan(bulan);
  cout << "Total pendapatan bulan ke" << bulan << "adalah Rp." << hasil;
  return 0;
}
int monthCount=1;
int pendapatan(int bulan)
{
  long long int angka;
  cout << "Masukan pendapatan bulan ke : " << monthCount << " ";
  monthCount++;
  cin >> angka;
  if (bulan == 1)
  {
    return angka;
  }
  else
  {
    return angka + pendapatan(bulan - 1);
  }
}