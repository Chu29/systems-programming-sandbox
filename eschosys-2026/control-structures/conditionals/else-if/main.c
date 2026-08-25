// 100-80 -> 'A'
// 79-60 -> 'B'
// 59-40 -> 'C'
// 39-30 -> 'D'
// 29-0 -> 'F'

#include<stdio.h>

int main() {

  int mark;
  scanf("%d", &mark);

  if (mark >= 80) {
    printf("You earned an A grade\n");
  }
  else if (mark < 80 && mark >= 60) {
    printf("You earned a B grade\n");
  }
  else if (mark < 60 && mark >= 40) {
    printf("You earned a C grade\n");
  }
  else if (mark < 40 && mark >= 30) {
    printf("You earned a D grade\n");
  }
  else {
    printf("You earned an F grade\n");
  }

  return 0;
}