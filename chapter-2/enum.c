#include <stdio.h>

enum { ONE, TWO, THREE, FOUR };
enum { FALSE, TRUE };
enum { START = 1, A, B, C, D, STOP = -1 };
/* enum {FALSE, TRUE}; can't use same names amongst enums */

int main() {
  printf("%d %d %d %d\n", ONE, TWO, THREE, FOUR);

  if (TRUE) {
    printf("true\n");
  }

  if (!FALSE) {
    printf("false\n");
  }

  printf("%d %d %d %d\n", START, A, D, STOP);
  return 0;
}
