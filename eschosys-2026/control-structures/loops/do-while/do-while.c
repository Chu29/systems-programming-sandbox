/*
init;
do {
 //code
} while(condition);
*/
#include <stdio.h>

int main()
{
  int count = 1;

  do
  {
    printf("%d\n", count);
    count++;
  } while (count < 2);

  return 0;
}

// using a do-while loop, write a c-program to display the multiplication timetable for 5