#include <stdio.h>

int main()
{
  int input, blanc = 0, tab = 0, newln = 0;

  while ((input = getchar()) != EOF)
  {
    if (input == '\t')
      tab += 1;
    else if (input == '\n')
      newln += 1;
    else if (input == ' ')
      blanc += 1;
  }

  printf("Blanc: %d\nTab: %d\nNewline: %d\n", blanc, tab, newln);

  return 0;
}