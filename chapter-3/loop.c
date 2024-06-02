#include <stdio.h>

void printarr(int arr[], int n);

int main() {
  int arr1[] = {1, 2, 3};
  int arr2[] = {};
  printarr(arr1, sizeof(arr1) / sizeof(int));
  printarr(arr2, sizeof(arr2) / sizeof(int));
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
