#include <stdio.h>

int absgrad(int n);

int main() {
  printf("absgrad: %d -> %d\n", -5, absgrad(-5));
  printf("absgrad: %d -> %d\n", 5, absgrad(5));
  printf("absgrad: %d -> %d\n", 0, absgrad(0));
  return 0;
}

int absgrad(int n) {
  if (n == 0) {
    goto error;
  }
  return n < 0 ? -1 : 1;

error:
  printf("Absolute value does not have a gradient defined at zero.\n");
  return 0;
}
