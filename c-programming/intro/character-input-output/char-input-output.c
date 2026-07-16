// A text stream is a sequence of characters divided into lines; each line
// consists of zero or more characters followed by a newline '\n' character.

#include <stdio.h>

int main()
{
  int c;

  while ((c = getchar()) != EOF)
  {
    putchar(c);
  }
}