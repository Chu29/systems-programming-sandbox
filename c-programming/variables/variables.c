#include <stdio.h>
#include <stdlib.h>

void swap(int, int);

int main()
{
  int a = 21;
  int b = 17;

  printf("main: a = %d, b = %d\n", a, b);
  swap(a, b);

  return EXIT_SUCCESS;
}

void swap(int a, int b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
  printf("swap: a = %d, b = %d\n", a, b);
}
