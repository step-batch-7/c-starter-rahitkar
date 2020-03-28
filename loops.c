#include <stdio.h>

long int get_factorial (int, int);

long int get_factorial (int num, int fact) {
  return num <= 0 ? fact : get_factorial(num - 1, fact * num);
}

int main(void) {
  int num;
  printf("Enter the number: ");
  scanf("%d", &num);

  printf("factorial= %ld\n", get_factorial(num, 1));
  return 0;
}