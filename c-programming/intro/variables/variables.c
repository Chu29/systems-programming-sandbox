#include <stdio.h>

/**
 * print Fahrenheit-Celsius table
 */

int main() {
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;    // the lower limit of temperature scale
  upper = 300;  // the upper limit of temperature scale
  step = 20;    // step size

  fahr = lower;
printf("Fahr\tCelsius\n");
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr - 32);
    printf("%3.0f\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }

  return 0;
}
