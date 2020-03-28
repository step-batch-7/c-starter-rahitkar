#include <stdio.h>

unsigned char is_even(int);
unsigned char is_odd(int);
long int square(int);
long int cube(int);

unsigned char is_even(int num) {
  return !(num % 2);
}

unsigned char is_odd(int num) {
  return !is_even(num);
}

long int square (int num) {
  return num * num;
}

long int cube (int num) {
return num * square(num);
}

int main (void) {
  int num;

  printf("give your number: ");
  scanf("%d", &num);

  printf("%d is %s\n", num, is_even(num) ? "even" : "not even");
  printf("%d is %s\n", num, is_odd(num) ? "odd" : "not odd");
  printf("%ld is square of %d\n", square(num), num);
  printf("%ld is cube of %d\n", cube(num), num);

  return 0;
}