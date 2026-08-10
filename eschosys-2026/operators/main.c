#include <stdio.h>

int main()
{
  // 1. Arithmetic Operators

  int num2 = 5;
  int num3 = 6;

  // printf("--- Arithmethic Operators ---\n");
  // printf("Sum of %d, %d and %d is: %d\n", num1, num2, num3, num1 + num2);
  // printf("Difference of %d and %d is: %d\n", num1, num2, num1 - num2);
  // printf("Product of %d and %d is: %d\n", num1, num2, num1 * num2);
  // printf("Division of %d and %d is: %d\n", num1, num2, num1 / num2);
  // printf("Modulus of %d and %d is: %d\n", num1, num2, num1 % num2);

  // 2. Relational Operators: >, <, >=, <=, !=, ==;
  // 3. Logical Operators: && -> AND || -> OR ;
  int num1 = 4;
  // int prefix = ++num1;
  // int postfix = num1++;
  // 4. Increment and Decrement Operators: ++, --;
  printf("---Increment Operator---\n");
  printf("The increment of %d is %d\n", num1); // prefix
  // printf("The increment of %d is %d\n", num1, postfix); // postfix

  // 5. Conditional Operator: <condition> ? value1 : value2
  num2 > num1 ? printf("True\n") : printf("False\n");

  return 0;
}
