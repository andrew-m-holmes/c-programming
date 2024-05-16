#include <stdio.h>

#define INWORD 1
#define OUTWORD 0

void printchar() {
  int c;
  printf("The end of file charactetr is %d\n", EOF);
  while ((c = getchar()) != EOF) {
    putchar(c);
  }
}

void countchar() {
  long count;
  for (count = 1; getchar() != EOF; ++count) {
    printf("Character count: %ld\n", count);
  }
}

void countlines() {
  int c;
  long count = 0;
  while ((c = getchar())) {
    if (c == EOF) {
      printf("Total newlines, tabs, and/or spaces: %ld\n", count);
      break;
    } else if (c == 9 || c == 10 || c == 32) {
      ++count;
    }
  }
}

void countword() {
  int c;
  long cc, wc, lc;
  int word = OUTWORD;
  cc = wc = lc = 0;
  while ((c = getchar()) != EOF) {
    ++cc;
    if (c == '\n') {
      ++lc;
    }
    if ((c == '\n' || c == ' ' || c == '\t') && INWORD) {
      ++wc;
      word = OUTWORD;
    } else if (word == OUTWORD) {
      word = INWORD;
    }
  }
  printf("Characters: %ld\nWords: %ld\nLines: %ld\n", cc, wc, lc);
}

int main() {
  // printchar();
  // countchar();
  // countlines();
  countword();
}
