# include <stdio.h>

void print_currency_table(long int);
long int print_currency(long int, int);

long int print_currency(long int amount, int currency) {
  printf("%d x Rs %d\n", (amount / currency), currency);

  return amount - currency * (amount / currency);
}

void print_currency_table(long int amount) {
  long int remaning_amount = amount;
  printf("Amount: Rs. %ld\n\n", remaning_amount);

  remaning_amount = print_currency(remaning_amount, 2000);
  remaning_amount = print_currency(remaning_amount, 500);
  remaning_amount = print_currency(remaning_amount, 200);
  remaning_amount = print_currency(remaning_amount, 100);
  remaning_amount = print_currency(remaning_amount, 50);
  remaning_amount = print_currency(remaning_amount, 10);
  remaning_amount = print_currency(remaning_amount, 5);
  remaning_amount = print_currency(remaning_amount, 1);
}

int main (void) {
  long int amount;

  printf("Enter the amount: ");
  scanf("%ld", &amount);
  print_currency_table(amount);

  return 0;
}