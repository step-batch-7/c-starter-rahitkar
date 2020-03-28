#include <stdio.h>

unsigned char is_even(int);
unsigned char is_odd(int);

unsigned char is_even(int num) {
  return !(num % 2);
}

unsigned char is_odd(int num) {
  return !is_even(num);
}

int main (void) {
  int num;

  printf("give your number: ");
  scanf("%d", &num);

  printf("%d is %s\n", num, is_even(num) ? "even" : "not even");
  printf("%d is %s\n", num, is_odd(num) ? "odd" : "not odd");
}