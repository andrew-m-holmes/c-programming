#include <float.h>
#include <limits.h>
#include <stdio.h>

const unsigned int BITS = 8;

int main() {

  // basic types
  char c = '0';
  int i = 1;
  float f = 24.5;
  double d = 123.3e-8;

  unsigned long char_size = sizeof(c) * BITS;
  unsigned long int_size = sizeof(i) * BITS;
  unsigned long float_size = sizeof(f) * BITS;
  unsigned long double_size = sizeof(d) * BITS;
  printf("char: %lu bits\nint %lu bits\nfloat: %lu bits\ndouble: %lu "
         "bits\n",
         char_size, int_size, float_size, double_size);

  // more advanced types
  unsigned int ui = -1; // (applies modulo arithmetic to put in range)
  printf("\n%u\n", ui);
  short int si = 32;
  unsigned short int usi = 0;
  long l = 30280283222;
  long long ll = 2932309230292;
  long double ld = 13008302.103011;
  // unsigned float uf; (invalid - floating point types always signed)

  unsigned long short_size = sizeof(usi) * BITS;
  unsigned long long_size = sizeof(l) * BITS;
  unsigned long long_long_size = sizeof(ll) * BITS;
  unsigned long long_double_size = sizeof(ld) * BITS;
  printf("\n");
  printf("short: %lu bits\n", short_size);
  printf("long: %lu bits\n", long_size);
  printf("long long: %lu bits\n", long_long_size);
  printf("unsigned double: %lu bits\n", long_double_size);

  printf("\n");
  printf("largest char unsigned: %d\n", UCHAR_MAX);
  printf("largest char signed: %d\n", SCHAR_MAX);
  printf("largest int unsigned: %ud\n", UINT_MAX);
  printf("largest int signed: %d\n", INT_MAX);
  printf("largest float: %f\n", FLT_MAX);
  printf("largest double: %lf\n", DBL_MAX);

  printf("\n");
  printf("smallest char unsigned: %d\n", UCHAR_MAX - UCHAR_MAX);
  printf("smallest char signed: %d\n", SCHAR_MIN);
  printf("smallest int unsigned: %u\n", UINT_MAX - UINT_MAX);
  printf("smallest int signed: %d\n", INT_MIN);
  printf("smallest float: %f\n", FLT_MIN);
  printf("smallest double: %lf\n", DBL_MIN);
  return 0;
}
