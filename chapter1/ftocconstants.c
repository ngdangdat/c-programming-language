#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

#define CELCIUS_HEADING "Celcius"
#define FAHR_HEADING "Fahr"

int main() {
  int fahr;
  printf("%s\t%s\n", FAHR_HEADING, CELCIUS_HEADING);
  for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {
    printf("%d\t%.1f\n", fahr, 5.0*(fahr - 32.0)/9.0);
  }
}
