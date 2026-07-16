#include <stdio.h>
#include <stdlib.h>

int main()
{

  if (printf("%s\n", "Hello, World!") == EOF)
    return EXIT_FAILURE;

  return EXIT_SUCCESS;
}