#include <array>
#include <iostream>
using namespace std;

int main(){
  array<int,10>nilai ;

 for(int i =0; i < nilai.size(); i++) {
    cout << "jumlah mahasiswa dengan nilai ";
    if (i == 0) {
      cout << "0-9: "; 
    }else if(i==9) {
      cout << "100: "; 
    }else {
    cout << i*10 << "-"<< (i*10)+9<< ": "; 
    }
    cin >> nilai[i];
 }
  cout << "Grafik Nilai"<<endl;
  for (int n = 0;n<nilai.size(); n++) {
    if (n == 0) {
      cout << "0-9: "; 
    }else if(n==9) {
      cout << "100: "; 
    }else {
    cout << n*10 << "-"<< (n*10)+9<< ": "; 
    }
    for (int i = 1; i<=nilai[n]; i++) {
      cout <<"*";
    }
    cout << endl;
  
  }

  
  return 0;
}
