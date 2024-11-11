#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  char jawaban, answer;
  cout << "Pilih angka dari 1 sampai 4" << endl;
  cout << "Apakah angkanya kurang dari 2" << endl;
  cin >> answer;
  if (answer == 'y') {
    cout << "Apakah angkanya kurang dari 2? (y|t) ";
    cin >> jawaban;
    if (jawaban == 'y') {
      cout << "Angkamu adalah 1" << endl;
    } else {
      cout << "Angkamu adalah 2" << endl;
    }
  } else {
    cout << "Apakah angkanya kurang dari 4? (y|t) "<<endl;
    cin>>jawaban;
    if (jawaban == 'y') {
      cout << "Angkamu adalah 3"<<endl;
    }else {
    
      cout << "Angkamu adalah 4"<<endl;
    }
  }
  return 0;
}
