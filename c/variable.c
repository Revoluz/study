#include <stdio.h>
#include <stdbool.h>
int main() {
  int umur = 17;
  float nilai_ipk= 3.2;
  char kalkulus= 'A';
  bool lulus = true;
  printf("%d\n",umur);
  printf("%f\n",nilai_ipk);
  printf("%c\n",kalkulus);
  printf("%d\n",lulus); // seperti int dikarenakan output dari bool itu 1 atau 0
  printf("dia memiliki ipk %f", nilai_ipk);
  printf("nilai kalkulus dia %c atau unggul\n",kalkulus);
  printf("nilai true pada boolean diwakili angka %d\n",lulus);
float num = 1234.56789;
printf("Nilai num: %g\n", num); // Output: Nilai num: 123456
  //
short num2 = 30000;
printf("Nilai num: %hd\n", num2); // Output: Nilai num: 30000
  return 0;
}
