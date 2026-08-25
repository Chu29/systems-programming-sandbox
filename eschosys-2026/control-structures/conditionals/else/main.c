/*
if(condition){
  // code
}
*/

#include<stdio.h>

// int main() {

//   int num1 = 10;
//   int num2 = 20;

//   if (num1 > num2) {
//     printf("num1 is greater than num2\n");
//   }
//   else {
//     printf("num1 is not greater than num2\n");
//   }

//   return 0;

// }

/*
* 1. using control structures, display even numbers from 1-100
* 2. display the sum of all the even numbers from 1-100
*/

int main() {
  int sum = 0;

  for (int num = 1; num <= 100; num++) {
    if (num % 2 == 0) {
      printf("%d ", num);
      sum += num;
    }
  }
  printf("\nSum of even numbers from 1-100: %d\n", sum);

  return 0;
}