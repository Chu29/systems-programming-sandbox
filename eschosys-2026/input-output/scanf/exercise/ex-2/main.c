#include<stdio.h>
#define GUESS 22

int main() {

  int input;

  while (1) {
    printf("Enter your guess: ");
    scanf("%d", &input);

    if (input == GUESS) {
      printf("Congratulations! You guessed the number!\n");
      break;
    }

    printf("Sorry, that's not the right number!\n");

  }
  return 0;
}