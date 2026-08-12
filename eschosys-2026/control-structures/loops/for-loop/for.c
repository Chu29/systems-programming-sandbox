#include <stdio.h>

int main()
{
  // int weeks = 4;

  // for (int week = 1; week <= weeks; week++)
  // {
  //   printf("Week-%d\n", week);
  //   for (int days = 1; days <= 7; days++)
  //   {
  //     printf("\tDay-%d\n", days);
  //   }
  // }

  int sum = 0;
  for (int count = 1; count <= 100; count++)
  {
    sum = sum + count;
  }

  printf("The sum of numbers between 1-100: %d\n", sum);

  return 0;
}

// calculate the sum of the numbers btween 1 - 100: 1 + 2 + 3 + .. + 100