#include <stdio.h>

unsigned char is_even(int);
unsigned char is_odd(int);
long int square(int);
long int cube(int);
int gcd (int, int);
int lcm (int, int);
float simapal_interest(float, float, int);
float compound_interest(float, float, int);
float convert_to_centigrade(float);
float convert_to_fahrenheit(float);
float get_gretest(float, float);
float get_gretest_of_three(float, float, float);
float get_avarage_of_three(float, float, float);

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

int lcm(int num1, int num2) {
  return num1 * num2 / gcd(num1, num2);
}

float simapal_interest(float principal, float rate, int time) {
  return (principal * rate * time)/100;
}

float compound_interest(float principal, float rate, int time) {
  if (time == 0)
  {
    return principal;
  }
  return compound_interest(principal + simapal_interest(principal, rate, 1), rate, time - 1);
}

float convert_to_centigrade(float fahrenheit) {
  return ((fahrenheit - 32) * 5 )/ 9;
}

float convert_to_fahrenheit(float centigrade) {
  return ((9 * centigrade) / 5) + 32;
}

float get_gretest(float num1, float num2) {
  return (num1 < num2 ? num2 : num1);
}

float get_gretest_of_three(float num1,float num2, float num3) {
  return get_gretest(get_gretest(num1, num2), num3);
}

float get_avarage_of_three(float num1, float num2, float num3) {
  return (num1 + num2 + num3) / 3;
}


int main (void) {
  int num, num1, num2;

  printf("Enter your number: ");
  scanf("%d", &num);

  printf("%d is %s\n", num, is_even(num) ? "even" : "not even");
  printf("%d is %s\n", num, is_odd(num) ? "odd" : "not odd");
  printf("%ld is square of %d\n", square(num), num);
  printf("%ld is cube of %d\n", cube(num), num);

  printf("Enter two numbers for gcd and lcm:\n");
  scanf("%d %d", &num1, &num2);
  printf("gcd of %d and %d is %d\n", num1, num2, gcd(num1, num2));
  printf("lcm of %d and %d is %d\n", num1, num2, lcm(num1, num2));

  float principal, rate;
  int time;
  printf("Enter the amount, rate of interest, and time period:\n");
  scanf("%f %f %d", &principal, &rate, &time);
  printf("simple interest of amount %f on rate of %f over a time of %d years is %f\n", principal, rate,time, simapal_interest(principal, rate, time));

  printf("compound interest of amount %f on rate of %f over a time of %d years is %f\n", principal, rate,time, compound_interest(principal, rate, time) - principal);

  float fahrenheit;
  printf("Enter the temperature in fahrenheit:");
  scanf("%f", &fahrenheit);
  printf("%f fahrenheit is %f centigrade\n", fahrenheit, convert_to_centigrade(fahrenheit));

  float centigrade;
  printf("Enter the temperature in centigrade:");
  scanf("%f", &centigrade);
  printf("%f centigrade is %f fahrenheit\n", centigrade, convert_to_fahrenheit(centigrade));

  float number1, number2, number3;
  printf("Enter three numbers:\n");
  scanf("%f %f %f", &number1, &number2, &number3);
  printf("%f is the greatest among %f, %f, %f\n", get_gretest_of_three(number1, number2, number3), number1, number2, number3);

  printf("%f is the avarage of %f, %f, %f\n", get_avarage_of_three(number1, number2, number3), number1, number2, number3);

  return 0;
}