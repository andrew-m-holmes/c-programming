#include <stdio.h>

int main() {
  int arr[] = {1, 2, 3};
  int i = 0;
  arr[i] = i++; // i left of assignment is i post increment, i right is before
                // increment

  for (i = 0; i < 3; ++i) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  arr[1] = 2;

  for (i = 0; i < 3; ++i) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  i = 0;
  arr[i] = ++i; // i on left and right is of assignment is incremented
  for (i = 0; i < 3; ++i) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
