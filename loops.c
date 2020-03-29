#include <stdio.h>

long int get_factorial (int, int);
void print_fibonacci_series (int);
void print_odd_num_series(int, int);
void print_even_num_series(int);
void print_multiplication_table(int, int);
int sum_of_n_num(int, int);
int sum_of_n_num(int, int);
void nth_num_series(int, int, int);
int sum_of_even_num_between_two_num(int, int);
void print_backwards_odd_num_series(int, int);

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

void print_odd_num_series(int starting, int limit) {
  int starting_point = starting +1;
 while (starting_point < limit)
 {
   !is_even(starting_point) ? printf("%d\n", starting_point) : printf("%s", "");
   starting_point++;
 }
} 

void print_even_num_series(int limit) {
  int num = 1;
 while (num < limit)
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

void print_nth_num_series(int starting, int ending, int nth_num) {
  int starting_point = starting;
  while (starting_point <= ending)
  {
    printf("%d\n", starting_point);
    starting_point+= nth_num;
  }
}

int sum_of_even_num_between_two_num(int starting, int ending) {
  int starting_point = starting + 1, sum = 0;
  while (starting_point < ending) 
  {
    is_even(starting_point) ? sum += starting_point : sum;
   starting_point++;
  }
  return sum;
}

void print_backwards_odd_num_series(int starting, int limit) {
  int ending_value = limit - 1;
 while (starting < ending_value)
 {
   !is_even(ending_value) ? printf("%d\n", ending_value) : printf("%s", "");
   ending_value--;
 }
} 

int main(void) {
  int num, limit;
  printf("Enter the number to get the factorial: ");
  scanf("%d", &num);

  printf("factorial= %ld\n", get_factorial(num, 1));
  printf("Enter the limit of fibonacci series: ");
  scanf("%d", &limit);
  printf("fibonacci series:\n");
  print_fibonacci_series(limit);

  printf("Enter the limit for odd and even number series:\n");
  scanf("%d", &limit);
  printf("odd numbers between 1 to %d:\n", limit);
  print_odd_num_series(1, limit);
  printf("even numbers between 1 to %d:\n", limit);
  print_even_num_series(limit);

  printf("Enter the multiplayer then the table limit:\n");
  scanf("%d %d", &num, &limit);
  printf("multiplication table:\n");
  print_multiplication_table(num, limit);

  printf("Enter the starting value then limit to get the sum and product:\n");
  scanf("%d %d", &num, &limit);
  printf("sum of %d to %d is %d\n", num, limit, sum_of_n_num(num, limit));
  printf("product of %d to %d is %d\n", num, limit, product_of_n_num(num, limit));

  printf("Enter the starting value and the ending value to get the odd numbers between them:\n");
  scanf("%d %d", &num, &limit);
  printf("odd numbers between %d to %d:\n", num, limit);
  print_odd_num_series(num, limit);

  int nth_num;
  printf("Enter the starting value, the ending value and the nth number to get the series:\n");
  scanf("%d %d %d", &num, &limit, &nth_num);
  printf("the %dth numbers between %d to %d are:\n", nth_num, num, limit);
  print_nth_num_series(num, limit, nth_num);

  printf("Enter the staring value and ending value to get the sum of even numbers between them:\n");
  scanf("%d %d", &num, &limit);
  printf("sum of even numbers between %d and %d is %d\n", num, limit, sum_of_even_num_between_two_num(num, limit));

  printf("Enter the staring value and ending value to get the backword odd number series:\n");
  scanf("%d %d", &num, &limit);
  printf("backwords odd numbers between %d to %d are:\n", num, limit);
  print_backwards_odd_num_series(num, limit);

  return 0;
}