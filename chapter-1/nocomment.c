#include <stdio.h>

#define BUFFER 1000

int main(int argc, char *argv[]) {
  if (argc != 2) {
    fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
    return 1;
  }

  char *filename = argv[1];
  FILE *file = fopen(filename, "r");
  if (file == NULL) {
    fprintf(stderr, "Error: could not open %s", argv[1]);
  }

  char buffer[BUFFER];
  while (fgets(buffer, sizeof(buffer), file) != NULL) {
    printf("%s", buffer);
  }
  return 0;
}
