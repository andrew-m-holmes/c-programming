#include <stdio.h>
#include <string.h>

void escape(const char s[], char t[]);
void unescape(const char s[], char t[]);

int main() {
  char *s = "Hello Andrew,\n\n\tThank you for joining Palantir!";
  printf("%s\n", s);

  const int len = strlen(s);
  char t[len * 2 + 1];
  escape(s, t);
  printf("%s\n", t);

  char u[len + 1];
  unescape(t, u);
  printf("%s\n", u);

  s = "bro this is a basic string with no tricks";
  printf("%s\n", s);

  escape(s, t);
  printf("%s\n", t);

  unescape(t, u);
  printf("%s\n", u);

  s = "This is an\n\t\n\t\nInteresting string\n\t";
  printf("%s\n", s);

  escape(s, t);
  printf("%s\n", t);

  unescape(t, u);
  printf("%s\n", u);
  return 0;
}

void escape(const char s[], char t[]) {
  int i, j, c;
  i = j = 0;

  while ((c = s[i]) != '\0') {
    switch (c) {
    case '\n':
      t[j++] = '\\';
      t[j++] = 'n';
      break;

    case '\t':
      t[j++] = '\\';
      t[j++] = 't';
      break;

    default:
      t[j++] = c;
      break;
    }
    ++i;
  }

  t[j] = '\0';
}

void unescape(const char s[], char t[]) {
  int i, j, c, escaped;
  i = j = escaped = 0;

  while ((c = s[i]) != '\0') {
    switch (c) {
    case '\\':
      t[j++] = c;
      escaped = 1;
      break;

    case 'n':
      switch (escaped) {
      case 0:
        t[j++] = c;
        break;
      case 1:
        t[--j] = '\n';
        ++j;
        escaped = 0;
        break;
      }
      break;

    case 't':
      switch (escaped) {
      case 0:
        t[j++] = c;
        break;
      case 1:
        t[--j] = '\t';
        ++j;
        escaped = 0;
        break;
      }
      break;

    default:
      t[j++] = c;
      break;
    }
    ++i;
  }
  t[j] = '\0';
}
