#include <stdio.h>

long int get_factorial (int, int);
void print_fibonacci_series (int);
void print_odd_num_series(int);
void print_even_num_series(int);
void print_multiplication_table(int, int);

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

unsigned char is_even(int num) {
  return !(num % 2);
}

void print_odd_num_series(int limit) {
  int num = 0;
 while (limit > -1)
 {
   !is_even(num) ? printf("%d\n", num) : printf("%s", "");
   limit--;
   num++;
 }
} 

void print_even_num_series(int limit) {
  int num = 0;
 while (limit > -1)
 {
   is_even(num) ? printf("%d\n", num) : printf("%s", "");
   limit--;
   num++;
 }
} 

void print_multiplication_table(int multiplayer, int limit) {
  int num = 1;
 while (limit > 0)
 {
   printf("%d * %d = %d\n", multiplayer, num, multiplayer * num);
   limit--;
   num++;
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
  printf("odd number series series:\n");
  print_odd_num_series(limit);
  printf("even number series series:\n");
  print_even_num_series(limit);

  int multiplayer, upto;
  printf("Enter the multiplayer then the table limit:\n");
  scanf("%d %d", &multiplayer, &upto);
  printf("multiplication table:\n");
  print_multiplication_table(multiplayer, upto);

  return 0;
}