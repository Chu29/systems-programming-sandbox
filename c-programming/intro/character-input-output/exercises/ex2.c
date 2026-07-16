#include <stdio.h>

int main()
{

  int input, blanc = 0;

  while ((input = getchar()) != EOF)
  {
    if (input == ' ')
      blanc += 1;
    if (blanc >= 1 && (input = getchar()) == ' ')
      input = putchar(' ');

    putchar(input);
  }

  return 0;
}
