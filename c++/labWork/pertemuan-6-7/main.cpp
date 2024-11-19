#include <iostream>

using namespace std;

int main() {
  for (int i = 1; i <= 5; i++) {
    for (int j = 5; i < j; j--) {
      cout << " ";
    }
    for (int k = 1; k <= i; k++) {
      cout << k;
    }
    for (int r = (i - 1); r >= 1; r--) {
      cout << r;
    }

    cout << endl;
  }
  int x = 1;
  for (int i = 4; i >= 1; i--) {
    for (int j = 1; j <= x; j++) {
      cout << " ";
    }
    for (int k = 1; k <= i; k++) {
      cout << k;
    }
    for (int r = (i - 1); r >= 1; r--) {
      cout << r;
    }
    x++;
    cout << endl;
  }

  cout << "Post Test" << endl;
  for (int i = 6; 1 <= i; i--) {
    for (int j = 1; j <= i; j++) {
      cout << "  ";
    }
    for (int k = i; k <= 6; k++) {
      cout << " " << k;
    }
    cout << endl;
  }
  cout << "Post Test" << endl;

  for (int i = 1; i <= 4; i++) {
    for (int j = 1; j <= 6; j++) {
      int temp = i * j;
      cout << " " << temp;
    }
    cout << endl;
  }
  int n = 5; // Jumlah baris di bagian atas pola (puncak piramida)
             // Bagian atas (piramida naik)
  for (int i = 1; i <= n; i++) {
    // Cetak spasi
    for (int j = 1; j <= n - i; j++) {
      cout << " ";
    }
    // Cetak angka naik
    for (int j = 1; j <= i; j++) {
      cout << j;
    }
    // Cetak angka turun
    for (int j = i - 1; j >= 1; j--) {
      cout << j;
    }
    cout << endl;
  }
  int q = 1;
  // Bagian bawah (piramida turun)
  for (int i = n - 1; i >= 1; i--) {
    // Cetak spasi
    for (int j = 1; j <= n - i; j++) {
      cout << " ";
    }
    // Cetak angka naik
    for (int j = 1; j <= i; j++) {
      cout << j;
    }
    // Cetak angka turun
    for (int j = i - 1; j >= 1; j--) {
      cout << j;
    }
    cout << endl;
  }
  int z = 7;

  cout << "Post test " << endl << endl;
  for (int i = 5; 1 <= i; i--) {
    for (int j = i; 1 <= j; j--) {
      cout << "*";
    }
    for (int k = 1; k <= q; k++) {
      cout << " ";
    }
    q += 2;
    for (int l = i; 1 <= l; l--) {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = 2; i <= 5; i++) {
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    for (int i = 1; i <= z; i++) {
      cout << " ";
    }
    z -= 2;
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    cout << endl;
  }
}
