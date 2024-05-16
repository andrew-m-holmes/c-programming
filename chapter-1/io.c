#include <stdio.h>

void printchar() {
  int c;
  printf("The end of file charactetr is %d\n", EOF);
  while ((c = getchar()) != EOF) {
    putchar(c);
  }
}

void countchar() {
  int c;
  long count;
  for (count = 1; getchar() != EOF; ++count) {
    printf("Character count: %ld\n", count);
  }
}

int main() { countchar(); }
