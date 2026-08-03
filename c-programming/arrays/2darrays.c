#include <stdio.h>

int main(int argc, char const *argv[])
{

  int numbers[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  int rows = sizeof(numbers) / sizeof(numbers[0]);
  int cols = sizeof(numbers[0]) / sizeof(numbers[0][0]);

  // Follows thesame principle as the 1D array.

  for (size_t i = 0; i < rows; i++)
  {
    for (size_t j = 0; j < cols; j++)
    {
      printf("%d", numbers[i][j]);
    }
    printf("\n");
  }

  return 0;
}
