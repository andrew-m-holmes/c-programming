#include <stdio.h>

int main() {

  int nother, nwspace, c;
  int ndigits[10];
  for (int i = 0; i < 10; ++i) {
    ndigits[i] = 0;
  }
  nother = nwspace = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      ++nwspace;
    } else if (c >= 48 && c <= 57) {
      ++ndigits[c - 48];
    } else {
      ++nother;
    }
  }

  printf("Digit Totals: ");
  for (int i = 48; i < 57; ++i) {
    putchar(i);
    printf(": %d", ndigits[i - '0']);
    if (i < 57) {
      printf(", ");
    } else {
      printf("\n");
    }
  }
  printf("Total white spaces: %d\n", nwspace);
  printf("Total other characters: %d\n", nother);
}
