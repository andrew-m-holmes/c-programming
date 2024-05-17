#include <stdio.h>

int power(int value, int root);

int main() {
  // compute the square root of numbers [0-9]
  for (int i = 0; i < 10; ++i) {
    printf("%d^%d = %d\n", i, 2, power(i, 2));
  }

  // compute the cube root of numbers [0-9]
  for (int i = 0; i < 10; ++i) {
    printf("%d^%d = %d\n", i, 3, power(i, 3));
  }
  return 0;
}

int power(int base, int root) {
  int value = 1;
  for (int i = 0; i < root; ++i) {
    value = value * base;
  }
  return value;
}
