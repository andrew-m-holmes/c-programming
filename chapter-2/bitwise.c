#include <stdio.h>

int main() {
  int x, y;
  x = 5;
  y = 15;

  /* bitwise operators only apply to integral (char short int and long, signed
    or unsigned) */
  printf("x, y: %d, %d\n", x, y);
  printf("x & y: %d\n", x & y);
  printf("x | y: %d\n", x | y);
  printf("x ^ y: %d\n", x ^ y);
  printf("~0: signed: %d, unsigned: %u\n", ~0, ~0);
  printf("x << 2: %d\n", x << 2);
  printf("y >> 2: %d\n", y >> 2);
  return 0;
}
