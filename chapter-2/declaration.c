#include <stdio.h>

// initialized once and always 0 value
const int ZERO;
const float FZERO;
const char EMPTYSTRING[10];

int strlen_(const char s[]);

int main() {

  printf("%d %f %s\n", ZERO, FZERO, EMPTYSTRING);

  // normal declarations
  int i, c;
  float f, arr[3];
  char s[10];

  // all initialized to garbage values
  printf("%c %d %f %f %s\n", c, i, f, arr[0], s);

  // declaration with initialization
  int j = 10;
  double d = 123e-5;

  printf("length of %s is %d\n", s, strlen_(s));
  printf("length of %s is %d\n", EMPTYSTRING, strlen_(EMPTYSTRING));
  return 0;
}

// const promises not to modify parameter
int strlen_(const char s[]) {
  int c, i;
  i = 0;
  while ((c = s[i++]) != '\0')
    ;
  return i;
}
