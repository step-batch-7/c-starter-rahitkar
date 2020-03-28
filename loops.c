#include <stdio.h>

long int get_factorial (int, int);
void print_fibonacci_series (int);
void print_odd_num_series(int);
void print_even_num_series(int);
void print_multiplication_table(int, int);
int sum_of_n_num(int, int);
int sum_of_n_num(int, int);

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
 while (num <= limit)
 {
   !is_even(num) ? printf("%d\n", num) : printf("%s", "");
   num++;
 }
} 

void print_even_num_series(int limit) {
  int num = 0;
 while (num <= limit)
 {
   is_even(num) ? printf("%d\n", num) : printf("%s", "");
   num++;
 }
} 

void print_multiplication_table(int multiplayer, int limit) {
  int num = 1;
 while (num <= limit)
 {
   printf("%d * %d = %d\n", multiplayer, num, multiplayer * num);
   num++;
 }
} 

int sum_of_n_num(int starting, int ending) {
  int sum = 0, starting_point = starting;
  while (starting_point <= ending) 
  {
    sum += starting_point ;
    starting_point++;
  }
  return sum;
}

int product_of_n_num(int starting, int ending) {
  int product = 1, starting_point = starting;
  while (starting_point <= ending) 
  {
    product *= starting_point ;
    starting_point++;
  }
  return product;
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

  int ending_point;
  printf("Enter the limit for odd and even number series:\n");
  scanf("%d", &ending_point);
  printf("odd number series series:\n");
  print_odd_num_series(ending_point);
  printf("even number series series:\n");
  print_even_num_series(ending_point);

  int multiplayer, upto;
  printf("Enter the multiplayer then the table limit:\n");
  scanf("%d %d", &multiplayer, &upto);
  printf("multiplication table:\n");
  print_multiplication_table(multiplayer, upto);

  int starting_value, ending_value;
  printf("Enter the starting value then limit to get the sum:\n");
  scanf("%d %d", &starting_value, &ending_value);
  printf("sum of %d to %d is %d\n", starting_value, ending_value, sum_of_n_num(starting_value, ending_value));
  printf("product of %d to %d is %d\n", starting_value, ending_value, product_of_n_num(starting_value, ending_value));

  return 0;
}