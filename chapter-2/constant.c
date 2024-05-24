#include <stdio.h>

#define MYAGE 22

int main() {

  // basic constants
  '\0';     // char
  1234;     // int
  1234U;    // unsigned int
  1234L;    // long
  1234UL;   // unsigned long
  123.4F;   // float
  1.234e2F; // float
  123.4;    // double

  // more advanced
  '\000'; // octal char
  '\x1f'; // hexadecimal char
  '\\';   // backslash
  '\"';   // single quote
  072;    // octal
  0x1f;   // hexadecimal

  char newline = 0x0a;
  printf("newline test %c", newline);
  newline = '\012';
  printf("newline test %c", newline);

  // constant experession
  printf("My age in 10 years (evaluated at compilte time): %d%c", MYAGE + 10,
         newline);

  "string literal (constant)";

  // implicit concatenation of strings
  "this string was combined with "
  "this string over here";
  const char s[] = "hello my name is andrew, "
                   "i'm 22, \" escape sequences work in strings";
  printf("%s\n", s);
  return 0;
}
