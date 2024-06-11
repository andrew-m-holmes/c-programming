#include <stdio.h>
#include <string.h>

#define MAXLEN 1000

char *itoa(int n, char s[]);
void reverse(char s[]);
void trim(char s[]);
int *arrabs(int arr[], unsigned int n);
void printarr(int arr[], unsigned int n);

int main() {
  char s[MAXLEN];
  printf("%s\n", itoa(5, s));
  printf("%s\n", itoa(20, s));
  printf("%s\n", itoa(321, s));
  printf("%s\n", itoa(2892, s));
  printf("%s\n", itoa(-1e3, s));

  char t[] =
      "Hello, my name is Andrew\n\t How are you doing today?\t\t\n\n      ";
  printf("%s\n", t);
  trim(t);
  printf("%s\n", t);

  int arr[] = {-2, -1, 3, 4, -5, 6, 4};
  printarr(arr, 7);
  printarr(arrabs(arr, 7), 7);
  printarr(arrabs(arr, 7), 7);
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

void trim(char s[]) {
  int i, n;
  n = strlen(s);
  for (i = n - 1; i >= 0; --i) {
    if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t' && s[i] != '\0') {
      break;
    }
  }
  s[i + 1] = '\0';
}

int *arrabs(int arr[], unsigned int n) {
  for (int i = 0; i < n; ++i) {
    if (arr[i] >= 0) {
      continue;
    }
    arr[i] *= -1;
  }
  return arr;
}

void printarr(int arr[], unsigned int n) {
  putchar('[');
  for (int i = 0; i < n; ++i) {
    printf("%d", arr[i]);
    if (i < n - 1) {
      putchar(' ');
    }
  }
  printf("]\n");
}
