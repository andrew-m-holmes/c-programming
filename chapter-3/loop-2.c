#include <stdio.h>
#include <string.h>

#define MAXLEN 1000

char *itoa(int n, char s[]);
void reverse(char s[]);

int main() {
  char s[MAXLEN];
  printf("%s\n", itoa(5, s));
  printf("%s\n", itoa(20, s));
  printf("%s\n", itoa(321, s));
  printf("%s\n", itoa(2892, s));
  printf("%s\n", itoa(-1e3, s));
  return 0;
}

char *itoa(int n, char s[]) {
  int i, r, neg;
  i = neg = 0;

  if (n < 0) {
    neg = 1;
    n *= -1;
  }

  do {
    r = n % 10;
    n /= 10;
    s[i++] = '0' + r;
  } while (n);

  if (neg) {
    s[i++] = '-';
  }

  s[i] = '\0';
  reverse(s);
  return s;
}

void reverse(char s[]) {
  int i, j, c;

  for (i = 0, j = strlen(s) - 1; i < j; ++i, --j) {
    c = s[i];
    s[i] = s[j];
    s[j] = c;
  }
}
