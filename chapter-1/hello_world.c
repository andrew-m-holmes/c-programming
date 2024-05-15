#include <stdio.h>

int main() {
  printf("hello world\n");

  printf("hello ");
  printf("\"world!\"");
  printf("\n");

  printf(
      "what happens when i use an invalid escape character such as \e"); // generates
                                                                         // %
  return 0;
}
