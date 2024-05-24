#include <stdio.h>

int main() {
  // operator priorities:
  // +x -x (x is some numeric type e.g. int)
  // * / %
  // + -
  // > < >= <=
  // == !=
  // &&
  // ||
  // =

  int c;
  while ((c = getchar()) != EOF && (+c % 2 != 0 || c == '\n')) {
    putchar(c);
  }
  return 0;
}
