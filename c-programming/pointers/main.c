#include <stdio.h>

void birthDate(int *age)
{
  (*age)++;
}

int main()
{

  int age = 25;

  birthDate(&age); // pass by value: creates a copy of the original variable.

  printf("%d\n", age);
  // printf("%p", pAge);

  return 0;
}
