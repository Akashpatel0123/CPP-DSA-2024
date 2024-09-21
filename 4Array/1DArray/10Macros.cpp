#include <stdio.h>

#define SQUARE(x) ((x) * (x))

int main() {
  int num = 51;
  int result = SQUARE(num);
  printf("The square of %d is %d\n", num, result);
  return 0;
}