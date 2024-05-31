#include <stdio.h>

double add(double x, double y);
int binsearch(int arr[], int n, int val);

int main() {
  // statements
  int a, b;
  a = b = 2;
  int c = add(a, b);

  if (c > 0) { // block
    printf("%d\n", c);
  } else { // another block
    printf("c too little :(\n");
  }

  if (a > 1)
    if (a > c)
      printf("a is larger than c\n");
    else
      printf("this belongs to inner if\n");

  if (a < -1) {
    if (a > b)
      printf("a is larger than 2\n");
  } else
    printf("This belongs to outer if \n");

  int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int n = sizeof(arr) / sizeof(int);
  printf("index: %d\n", binsearch(arr, n, 50));
  printf("index: %d\n", binsearch(arr, n, 100));
  printf("index: %d\n", binsearch(arr, n, 0));

  return 0;
}

double add(double x, double y) { return x + y; }

int binsearch(int arr[], int n, int val) {
  int low, high, mid;
  low = 0;
  high = n - 1;

  while (low <= high) {
    mid = (high - low) / 2 + low;

    if (arr[mid] > val) {
      high = mid - 1;
    } else if (arr[mid] < val) {
      low = mid + 1;
    } else {
      return mid;
    }
  }

  return -1;
}
