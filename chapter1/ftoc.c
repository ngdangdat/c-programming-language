#include <stdio.h>

int main() {
  float celcius, fahr;
  int lower, upper, step;
  lower = 0;
  upper = 300;
  step = 20;
  printf("Fahr Celcius\n");
  while (lower < upper + 1) {
    fahr = lower;
    celcius = 5 * (fahr-32) / 9;
    printf("%3.0f %6.1f\n", fahr, celcius);
    lower += step;
  }

}
