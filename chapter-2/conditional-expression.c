#include <stdio.h>
#include <string.h>

int min(int a, int b);
char *lower(char s[]);
void *copy(const char s[], char t[]);

int main() {
  int a, b;
  a = 5;
  b = 3;
  printf("min(%d, %d): %d\n", a, b, min(a, b));

  a = b;
  printf("%c was chosen for min(a, b) where a = %d and b = %d\n",
         b >= a ? 'a' : 'b', a, b);

  char s[] = "hello My NAMe is Andrew";
  char t[strlen(s) + 1];
  copy(s, t);
  printf("\"%s\" was changed to \"%s\"\n", t, lower(s));
  return 0;
}

int min(int a, int b) { return a <= b ? a : b; }

char *lower(char s[]) {
  int i, c;
  for (int i = 0; (c = s[i]) != '\0'; ++i) {
    s[i] += c >= 'A' && c <= 'Z' ? ('a' - 'A') : 0;
  }
  return s;
}

void *copy(const char s[], char t[]) {
  int i, c;
  for (i = 0; (c = s[i]) != '\0'; ++i) {
    t[i] = c;
  }
  t[i] = '\0';
  return t;
}
