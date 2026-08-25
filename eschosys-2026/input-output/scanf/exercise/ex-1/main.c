#include<stdio.h>


int main() {
  int multiplier_limit;
  int multiplicand;
  int count = 1;

  printf("Enter a value for the multiplicand: ");
  scanf("%d", &multiplicand);

  printf("Enter a multiplier limit: ");
  scanf("%d", &multiplier_limit);

  while (count <= multiplier_limit) {
    printf("%d x %d = %d\n", multiplicand, count, multiplicand * count);
    count++;
  }



  return 0;
}