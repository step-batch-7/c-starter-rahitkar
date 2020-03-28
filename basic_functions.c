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

int gcd (int num1, int num2) {
if (num2 % num1 == 0)
{
  return num1;
}
return gcd(num2 % num1, num1);
}

int main (void) {
  int num, num1, num2;

  printf("Enter your number: ");
  scanf("%d", &num);

  printf("%d is %s\n", num, is_even(num) ? "even" : "not even");
  printf("%d is %s\n", num, is_odd(num) ? "odd" : "not odd");
  printf("%ld is square of %d\n", square(num), num);
  printf("%ld is cube of %d\n", cube(num), num);

  printf("Enter two numbers for gcd: ");
  scanf("%d %d", &num1, &num2);
  printf("gcd of %d and %d is %d\n", num1, num2, 
  num1 < num2 ? gcd(num1, num2): gcd(num2, num1));

  return 0;
}