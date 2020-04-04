#include <stdio.h>

void change(int *code, int length)
{
  for (int count = 0; count < length; count++)
  {
    if (code[count] != 32)
    {
      code[count] = code[count] + 13;
    }
    if (code[count] > 122)
    {
      code[count] = 96 + (code[count] - 122);
    }
  }
};

int main(void)
{
  int length;
  printf("enter the length of the code: ");
  scanf("%d", &length);
  int genome_sequence[length], letters[length];
  printf("Now enter the coded value for every letter:\n");
  for (int i = 0; i < length; i++)
  {
    scanf("%d", &genome_sequence[i]);
    letters[i] = genome_sequence[i];
  }

  change(letters, length);

  for (int i = 0; i < length; i++)
  {
    printf("%c",letters[i]);
  }
    printf("\n");
  return 0;
}