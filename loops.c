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
  int num;
  printf("Enter the number to get the factorial: ");
  scanf("%d", &num);

  int limit;
  printf("factorial= %ld\n", get_factorial(num, 1));
  printf("Enter the limit of fibonacci series: ");
  scanf("%d", &limit);
  printf("fibonacci series:\n");
  print_fibonacci_series(limit);

  int ending_num_value;
  printf("Enter the limit for odd and even number series:\n");
  scanf("%d", &ending_num_value);
  printf("odd number series series between 1 to %d:\n", ending_num_value);
  print_odd_num_series(1, ending_num_value);
  printf("even number series series between 1 to %d:\n", ending_num_value);
  print_even_num_series(ending_num_value);

  int multiplayer, upto;
  printf("Enter the multiplayer then the table limit:\n");
  scanf("%d %d", &multiplayer, &upto);
  printf("multiplication table:\n");
  print_multiplication_table(multiplayer, upto);

  int starting_value, ending_value;
  printf("Enter the starting value then limit to get the sum and product:\n");
  scanf("%d %d", &starting_value, &ending_value);
  printf("sum of %d to %d is %d\n", starting_value, ending_value, sum_of_n_num(starting_value, ending_value));
  printf("product of %d to %d is %d\n", starting_value, ending_value, product_of_n_num(starting_value, ending_value));

  int from, to;
  printf("Enter the starting value and the ending value to get the odd numbers between them:\n");
  scanf("%d %d", &from, &to);
  printf("odd numbers between %d to %d:\n", from, to);
  print_odd_num_series(from, to);

  int start, end, nth_num;
  printf("Enter the starting value, the ending value and the nth number to get the series:\n");
  scanf("%d %d %d", &start, &end, &nth_num);
  printf("the %dth numbers between %d to %d are:\n", nth_num, start, end);
  print_nth_num_series(start, end, nth_num);

  int starting_point, ending_point;
  printf("Enter the staring value and ending value to get the sum of even numbers between them:\n");
  scanf("%d %d", &starting_point, &ending_point);
  printf("sum of even numbers between %d and %d is %d\n", starting_point, ending_point, sum_of_even_num_between_two_num(starting_point, ending_point));

  int starting_number, ending_number;
  printf("Enter the staring value and ending value to get the backword odd number series:\n");
  scanf("%d %d", &starting_number, &ending_number);
  printf("backwords odd numbers between %d to %d are:\n", starting_number, ending_number);
  print_backwards_odd_num_series(starting_number, ending_number);

  return 0;
}