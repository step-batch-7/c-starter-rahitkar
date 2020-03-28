#include <stdio.h>

long int get_factorial (int, int);
void print_fibonacci_series (int);

long int get_factorial (int num, int fact) {
  return num <= 0 ? fact : get_factorial(num - 1, fact * num);
}

void print_fibonacci_series (int limit) {
  int term1 = 0, term2 = 1, value_holder;
  while (limit != 0) 
  {
  printf("%d\n", term2);
  value_holder = term2;
  term2 += term1;
  term1 = value_holder;
  limit--;
  }
}

int main(void) {
  int num, limit;
  printf("Enter the number: ");
  scanf("%d", &num);

  printf("factorial= %ld\n", get_factorial(num, 1));
  printf("Enter the limit of fibonacci series: ");
  scanf("%d", &limit);
  printf("fibonacci series:\n");
  print_fibonacci_series(limit);

  return 0;
}