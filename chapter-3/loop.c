#include <ctype.h>
#include <stdio.h>

void printarr(int arr[], int n);
int strlen_(const char s[]);
void reverse(char s[]);
void expand(const char s[], char t[]);
int getend(const char s[], int start, int n);

int main() {
  int arr1[] = {1, 2, 3};
  int arr2[] = {};
  printarr(arr1, sizeof(arr1) / sizeof(int));
  printarr(arr2, sizeof(arr2) / sizeof(int));

  char s[] = "how many characters does this string have?";
  printf("\"%s\" has a length of %d\n", s, strlen_(s));
  printf("\"%s\" has a length of %d\n", "", strlen_(""));

  reverse(s);
  printf("%s\n", s);
  reverse(s);
  printf("%s\n", s);

  char t[1000];
  expand("-a-b-f0-5-", t);
  printf("%s\n", t);
  return 0;
}

void printarr(int arr[], int n) {
  printf("[");
  for (int i = 0; i < n; ++i) {
    printf("%d", arr[i]);
    if (i < n - 1) {
      printf(", ");
    }
  }
  printf("]\n");
}

int strlen_(const char s[]) {
  int i, c, n;
  i = c = n = 0;

  while ((c = s[i++]) != '\0') {
    ++n;
  }
  return n;
}

void reverse(char s[]) {
  int i, j, c;

  for (i = 0, j = strlen_(s) - 1; i < j; ++i, --j) {
    c = s[i], s[i] = s[j], s[j] = c;
  }
}

void expand(const char s[], char t[]) {
  int i, j, n, c, d, start, end, lead, trail;
  i = j = lead = trail = 0;
  n = strlen_(s);

  if (s[0] == '-') {
    lead = 1;
    ++i;
    ++j;
  }
  if (s[n - 1] == '-') {
    trail = 1;
    --n;
  }

  while (i < n) {
    start = i;
    end = getend(s, start, n);
    c = tolower(s[start]), d = tolower(s[end]);
    printf("start: %d, end: %d\n", start, end);
    while (c <= d) {
      t[j++] = c++;
    }
    i = end + 1;
  }

  if (lead) {
    t[0] = '-';
  }
  if (trail) {
    t[j++] = '-';
  }
  t[j] = '\0';
}

int getend(const char s[], int start, int n) {
  int i, c, digit;
  c = s[start];
  i = start + 1;
  digit = isdigit(c) ? 1 : 0;

  while (i < n - 1) {
    if (s[i] == '-') {
      ++i;
      continue;
    }
    if (digit && !isdigit(s[i]) || !digit && isdigit(s[i])) {
      return i - 1;
    }
    ++i;
  }
  return i;
}
