#include <ctype.h>
#include <stdio.h>

char *squeeze(char s[], char c);
char *squeeze2(char s[], char t[]);
char *concat(char s[], char t[]);

int main() {

  int a, b;
  a = b = 0;

  printf("pre: %d\n", ++a);
  printf("post: %d\n", b++);

  printf("a: %d\n", a);
  printf("b: %d\n", b);

  char c = 'a';
  char str[] = "hello my name is andrew";
  printf("squeeze \'%c\' from \"%s\" is: ", c, str);
  printf("%s\n", squeeze(str, c));

  char s[20] = "hello ";
  char t[] = "andrew";

  printf("\"%s\" combined with \"%s\" is ", s, t);
  printf("\"%s\"\n", concat(s, t));

  char str1[] = "this is a long sequence of text";
  char str2[] = "hello";

  printf("removing characters in \"%s\" from \"%s\" gives: ", str1, str2);
  printf("\"%s\"\n", squeeze2(str1, str2));
  return 0;
}

char *squeeze(char s[], char c) {
  int i, j;
  j = 0;

  for (int i = 0; s[i] != '\0'; ++i) {
    if (s[i] != c) {
      s[j++] = s[i];
    }
  }
  s[j] = '\0';
  return s;
}

char *squeeze2(char s[], char t[]) {
  int i, j, c;
  char alpha[26];

  for (i = 0; i < 26; ++i) {
    alpha[i] = 0;
  }

  for (i = 0; (c = tolower(t[i])) != '\0'; ++i) {
    if (alpha[c - 'a'] == 0) {
      alpha[c - 'a'] = 1;
    }
  }

  for (i = j = 0; (c = tolower(s[i])) != '\0'; ++i) {
    if (!alpha[c - 'a']) {
      s[j++] = s[i];
    }
  }
  s[j] = '\0';
  return s;
}

char *concat(char s[], char t[]) {
  int i, j;
  i = j = 0;

  while (s[i] != '\0') {
    ++i;
  }
  while (t[j] != '\0') {
    s[i++] = t[j++];
  }
  return s;
}
