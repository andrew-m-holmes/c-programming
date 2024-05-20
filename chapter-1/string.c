#include <stdio.h>

#define MAXLEN 1000

int getline_(char s[], int maxlen);
void copy(char to[], char from[]);

int main() {
  int len, bestlen;
  char line[MAXLEN], bestline[MAXLEN];
  len = bestlen = 0;

  while ((len = getline_(line, MAXLEN)) != 0) {
    if (len > bestlen) {
      bestlen = len;
      copy(bestline, line);
    }
  }

  if (bestlen > 0) {
    printf("Longest line: %s\nLength: %d\n", bestline, bestlen);
  } else {
    printf("No line was provided\n");
  }
  return 0;
}

int getline_(char s[], int maxlen) {
  int c, i;
  i = 0;
  while ((c = getchar()) != EOF && i < maxlen - 1) {
    s[i++] = c;
    if (c == '\n') {
      break;
    }
  }
  s[i] = '\0';
  return i;
}

void copy(char to[], char from[]) {
  int i = 0;
  while ((to[i] = from[i]) != '\0') {
    ++i;
  }
}
