#include <stdio.h>

int main() {
  float lower = 0.0;
  float upper = 300.0;
  float step = 20.0;

  float fahr;
  float celsius;

  printf("Fahr\tCelsius\n");
  for (fahr = upper; fahr >= lower; fahr -= step) {
    celsius = (5.0 / 9.0) * (fahr - 32);
    printf("%3.0f\t%6.1f\n", fahr, celsius);
  }

  return 0;
}
