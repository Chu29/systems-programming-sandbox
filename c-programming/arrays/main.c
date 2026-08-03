#include <stdio.h>

int main(int argc, char const *argv[])
{
  int numbers[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  char grades[] = {'A', 'B', 'C', 'D'};

  int size_arr = sizeof(numbers) / sizeof(numbers[0]);

  for (size_t i = 0; i < size_arr; i++)
  {
    printf("%d\n", numbers[i]);
  }

  return 0;
}

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//   int scores[5];

//   int size_of_arr = sizeof(scores) / sizeof(scores[0]);

//   // for loop to keep asking the user until the array is filled.
//   for (int count = 0; count < size_of_arr; count++)
//   {
//     printf("Enter number %d:", count+1);
//     scanf("%d", &scores[count]);
//   }

//   for (size_t i = 0; i < size_of_arr; i++)
//   {
//     printf("%d ", scores[i]);
//   }

//   return 0;
// }
