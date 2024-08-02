#include <iostream>

using namespace std;

void printArray(int *ptrArray, int baris, int kolom) {
  /*cout << *(ptrArray+1)<< endl;*/
  int index = 0;
    cout << *(ptrArray + index)<< " "<<endl;
  for (int i = 0; i < baris; i++) {
    cout << "[ ";
    for (int j = 0; j < kolom; j++) {
      //syntax dibawah berfungsi untuk menampilkan nilai dari array dengan cara mengakses addressnya lewat variable index jika index nilai nya 1 maka addresnya akan ditambah 4 jika 0 addressnya ditambah 0  di alamat array nya lalu deferencing pointer untuk mengakses nilai menggunakan pointer
      //https://youtu.be/8WhUADLI4RQ?si=vV9HowcxhBCLAsTD&t=592
      cout << *(ptrArray + index)<< " ";
      /*cout <<*(ptrArray[i][j])<<  " ";*/
      index ++;
    }
    cout << "]"<<endl;
  }
}
int main() {
  // array multidimensi
  /*int array[baris][kolom] = {1,2,3,4,5}*/
  int arrayMD[2][4] = {1, 2, 3, 4,5,6,7,8};
  /*[[1,2],[3,4]]  */
  /*cout << arrayMD[0][0]<<" "<< arrayMD[0][1]<<endl;*/
  /*cout << arrayMD[1][0]<<" "<< arrayMD[1][1]<<endl;*/
  cout << *(arrayMD + 1)<<endl;
  cout << *arrayMD <<endl;
  cout << arrayMD <<endl;
  printArray(*arrayMD, 2, 4);
  return 0;
}
