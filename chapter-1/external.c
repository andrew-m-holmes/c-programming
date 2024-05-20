#include <stdio.h>

#define MAXLEN 1000

int len, bestlen;
char line[MAXLEN], bestline[MAXLEN];
int getline_(void);
void copy(void);

int main() {
  extern int len, bestlen; // optional; if var in same file omit extern keyword
  len = bestlen = 0;

  while ((len = getline_()) > 0) {
    if (len > bestlen) {
      bestlen = len;
      copy();
    }
  }

  if (bestlen > 0) {
    printf("The longest sequence with a length of %d was: %s\n", bestlen,
           bestline);
  } else {
    printf("A sequence was not provided");
  }
  return 0;
}

int getline_() {
  int i, c;
  i = 0;

  while ((c = getchar()) != EOF && i < MAXLEN - 1) {
    line[i++] = c;
    if (c == '\n') {
      break;
    }
  }
  line[i] = '\0';
  return i;
}

void copy() {
  int i = 0;
  extern char line[], bestline[];
  while ((bestline[i] = line[i]) != '\0') {
    i++;
  }
}
