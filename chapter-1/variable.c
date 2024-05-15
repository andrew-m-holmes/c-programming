#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/* show casing the ability to comment
on multiple lines */
void whileconvert(int low, int high, int step) {
  float fah, cel;
  fah = low;
  printf("fahrenheit -> celcius\n");
  while (fah <= high) {
    cel = (5.0 / 9.0) * (fah - 32); // implicit float convert
    // printf("%d\t%d\n", fah, cel);
    printf("%3.0f F %6.1f C\n", fah, cel); // right justified
    fah += step;
  }
}

void forconvert(int start, int stop, int step) {
  printf("fahrenheit -> celcius\n");
  if (start > stop) {
    for (int fah = start; fah >= stop; fah += step) {
      printf("%3d F %6.1f C\n", fah, (5.0 / 9) * (fah - 32)); // right justified
    }
  } else {
    for (int fah = start; fah <= stop; fah += step) {
      printf("%3d F %6.1f C\n", fah, (5.0 / 9) * (fah - 32)); // right justified
    }
  }
}

int main() {
  int low = 0;
  int high = 300;
  int step = 20;
  whileconvert(low, high, step);
  printf("\n");
  forconvert(low, high, step);
  printf("\n");
  forconvert(UPPER, LOWER, -1 * STEP);
}
