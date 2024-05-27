#include <stdio.h>

int main() {

  int a, b;
  a = 10;
  b = 0x01;

  // arithmetic assignment operators
  a += 2;
  printf("a += 2: %d\n", a);
  a -= 2;
  printf("a -= 2: %d\n", a);
  a *= 2;
  printf("a *= 2: %d\n", a);
  a /= 2;
  printf("a /= 2: %d\n", a);
  a %= 2;
  printf("a %%= 2: %d\n", a);

  printf("\n");

  // binary assignment operators (note it returns a value)
  printf("b &= 1: %d\n", b &= 1);
  printf("b |= 1: %d\n", b |= 1);
  printf("b >>= 1: %d\n", b >>= 1);
  printf("b ^= 1: %d\n", b ^= 1);
  printf("b <<= 1: %d\n", b <<= 1);
  printf("b != 1: %d\n", b != 1);
  printf("b == 1: %d\n", b == 1);

  return 0;
}
