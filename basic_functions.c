#include <stdio.h>

unsigned char is_even(int);

unsigned char is_even(int num) {
  return !(num % 2);
}

int main (void) {
  int num;

  printf("give your number: ");
  scanf("%d", &num);
  
  if (is_even(num))
  {
    printf("%d is even\n", num);
    return 0;
  }

  printf("%d is not even\n", num);
  return 0;
}