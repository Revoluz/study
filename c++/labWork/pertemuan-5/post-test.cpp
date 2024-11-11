#include <cmath>
#include <iostream>
using namespace std;

int main() {
  double input, result;
  char change, scale;
  cout << "Masukan Skala asal" << endl;
  cin >> scale;
  cout << "Masukkan suhu asal dalam " << scale << " = " << endl;
  cin >> input;
  cout << "Masukkan skala tujuan = ";
  cin >> change;
  // sekala asal
  /*if (scale == 'c' || scale == 'C') {*/
  /*  if (change == 'k' || change == 'K') {*/
  /*    result = input + 273;*/
  /*  } else if (change == 'f' || change == 'F') {*/
  /*    result = (double)9 / 5 * input + 32;*/
  /*  }*/
  /*} else if (scale == 'k' || scale == 'K') {*/
  /*  if (change == 'c' || change == 'C') {*/
  /**/
  /*    result = input - 273;*/
  /*  } else if (change == 'f' || change == 'F') {*/
  /*    result = (double)9 / 5 * (input - 273) + 32;*/
  /*  }*/
  /*} else if (scale == 'f' || scale == 'F') {*/
  /*  if (change == 'c' || change == 'C') {*/
  /*    result = (double)5 / 9 * (input - 32);*/
  /*  } else if (change == 'k' || change == 'k') {*/
  /*    result = (double)5 / 9 * (input - 32) + 273;*/
  /*  }*/
  /*}*/
  cout << input << " derajat " << scale << "sama dengan " << result << " "
       << change << endl;

  cout << "----------------------------" << endl;
  cout << "Switch Case" << endl;
  switch (scale) {
  case 'c':
    switch (change) {
    case 'k':

      result = input + 273;
      break;
    case 'f':
      result = (double)9 / 5 * input + 32;
      break;
    }
    break;
  case 'k':
    switch (change) {
    case 'c':
      result = input - 273;
      break;
    case 'f':
      result = (double)9 / 5 * (input - 273) + 32;
      break;
    }
    break;
  case 'f':
    switch (change) {
    case 'c':
      result = (double)5 / 9 * (input - 32);
      break;
    case 'k':
      result = (double)5 / 9 * (input - 32) + 273;
      break;
    }
    break;
  }
  cout << input << " derajat " << scale << "sama dengan " << result << " "
       << change << endl;
}
