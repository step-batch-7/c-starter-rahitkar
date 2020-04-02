# include <stdio.h>

void get_count (long int, int *, int *);

void get_count (long int amount, int *notes, int *note_count) {
  int remaning_amount = amount;
  for (int i = 0; i < 8; i++)
  {
    note_count[i] = remaning_amount / notes[i];
    remaning_amount -= note_count[i] * notes[i];
  }
}

int main (void) {
  long int amount;

  printf("Enter the amount: ");
  scanf("%ld", &amount);
  printf("Amount: Rs. %ld\n\n", amount);

  int notes[8] = {2000, 500, 200, 100, 50, 10, 5, 1};
  int note_count[8];
  get_count(amount, notes, note_count);

    for (int i = 0; i < 8; i++)
  {
    printf("%d x Rs %d\n", note_count[i], notes[i]);
  }
  return 0;
}