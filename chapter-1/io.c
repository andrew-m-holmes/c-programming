#include <stdio.h>

int main() {
  int c;
  printf("The end of file charactetr is %d\n", EOF);
  while ((c = getchar()) != EOF) {
    putchar(c);
  }
}
