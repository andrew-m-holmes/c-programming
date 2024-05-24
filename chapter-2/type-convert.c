#include <math.h>
#include <stdio.h>

unsigned long next = 1;

int atoi(const char s[]);
void lower(char s[]);
double halve(double n);
unsigned long rand(void);
void srand(unsigned long seed);

int main() {

  printf("%d\n", atoi("892"));
  printf("%d\n", atoi("0"));
  printf("%d\n", atoi("308028"));

  char s[] = "HELLO my friend!";
  lower(s);
  printf("%s\n", s);

  char t[] = "Another array, But ThIs TIME with Digits: and symbols *&(@*0380.";
  lower(t);
  printf("%s\n", t);

  int i;
  char c = 'a';
  float f = -12343.122;
  double d = 123453.038039;

  // c preserved
  printf("c: %u\n", c);
  i = c;
  c = i;
  printf("c: %u\n", c);
  printf("i: %d\n", i);

  // f fractional part lost, truncation
  printf("f: %f\n", f);
  i = f;
  f = i;
  printf("i: %i\n", i);
  printf("f: %f\n", f);

  // d fractional information lost, rounding error
  printf("d: %lf\n", d);
  f = d;
  d = f;
  printf("f: %f\n", f);
  printf("d: %lf\n", d);

  i = 15;
  printf("%lf\n", halve(i)); // casted
  i = 33;
  printf("%lf\n", halve((double)i)); // explicit cast

  i = 25;
  printf("%lf\n", sqrt(i));
  printf("%lf\n", sqrt((double)i));
  printf("%lf\n", sqrt(25));

  srand(3);
  printf("rand: %lu\n", rand());
  printf("rand: %lu\n", rand());
  printf("rand: %lu\n", rand());
  printf("rand: %lu\n", rand());

  return 0;
}

int atoi(const char s[]) {
  int i, c, n;
  i = n = 0;
  // s[i++] gets converted to an int from a char (narrow -> wide)
  while ((c = s[i++]) != '\0' && c >= '0' && c <= '9') {
    n = n * 10 + c - '0';
  }
  return n;
}

void lower(char s[]) {
  int i, c, offset;
  i = 0;
  offset = 'a' - 'A';

  while ((c = s[i]) != '\0') {
    if (c >= 'A' && c <= 'Z') {
      s[i] += offset;
    }
    ++i;
  }
}

double halve(double n) { return n / 2.0; }

unsigned long rand() {
  next = next * 12208302 + 12183;
  return (unsigned long)(next % 32768);
}

void srand(unsigned long seed) { next = seed; }
