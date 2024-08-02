#include <iostream>
#include <ostream>
#include <string>
using namespace std;


int kuadrat(int x) {
  int y;
  y = x * x;
  return y;
}
/*void tidak mengmbalikan nilai hanya menjalankan proses contoh cout*/
void tampilkan (string input){
  cout << input << endl;
}
int main(int argc, char *argv[]) {
  int input, hasil,a,b,hasil2;
  cout << "nilai kuadrat dari: ";
  cin >> input;
  hasil = kuadrat(input);
  cout << "hasil dari kuadrat " << input << " adalah " << hasil << endl;
  string text = "Hello ini function void";
  tampilkan(text);
  return 0;
}
