#include <cstdio>
#include <iostream>
using namespace std;

int main() {
  int number;
  long long int numbers;
  char ch;
  float f;
  double d;
  // https://www.petanikode.com/cpp-input-output/
  // Note: You can also use cin and cout instead of scanf and printf; however,
  // if you are taking a million numbers as input and printing a million lines,
  // it is faster to use scanf and printf.For printf, arguments of type float
  // are promoted to double so both %f and %lf are used for double. For scanf,
  // you should use %f for float and %lf for double.
  /*scanf("%c %lf", &ch, &d);*/
  // 3 12345678912345 a 334.23 14049.30493
  scanf("%d %lld %c %f %lf", &number, &numbers, &ch, &f, &d);
  printf("%d \n%lld \n%c \n%f \n%lf", number, numbers, ch, f,d);
  return 0;
}
