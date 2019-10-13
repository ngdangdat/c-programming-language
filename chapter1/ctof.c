#include <stdio.h>

int main() {
  float celcius, fahr;
  int lower, upper, step;
  lower = 0;
  upper = 300;
  step = 20;
  printf("Celcius\tFahr\n");
  while (lower <= upper) {
    celcius = lower;
    fahr = celcius * 9 / 5 + 32;
    printf("%.0f\t%.0f\n", celcius, fahr);
    lower += step;
  }
}
