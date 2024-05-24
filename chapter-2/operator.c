#include <stdio.h>

int main() {
  // operator priorities:
  // * / %
  // + -
  // > < >= <=
  // == !=
  // &&
  // ||
  // =

  int c;
  while ((c = getchar()) != EOF && (c % 2 != 0 || c == '\n')) {
    putchar(c);
  }
  return 0;
}
