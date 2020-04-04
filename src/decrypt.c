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
  int genome_sequence[9] = {116, 98, 32, 112, 98, 101, 98, 97, 110};
  int letters[9];

  for (int i = 0; i < 9; i++)
  {
    letters[i] = genome_sequence[i];
  }
  change(letters, 9);

  for (int i = 0; i < 9; i++)
  {
    printf("%c",letters[i]);
  }
    printf("\n");
  return 0;
}