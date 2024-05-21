#include <stdio.h>

#define MAXLEN 1000

int getindex(char line[]);
void cleansl(char line[], int start);
int cleanml(char line[], int start);

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

  // some random comment
  char line[MAXLEN];
  int inside, i;
  inside = i = 0;

  while (fgets(line, sizeof(line), file) != NULL) { // some random comment again
    if (inside) {
      inside = cleanml(line, 0);
    } else if ((i = getindex(line)) != -1) {
      if (line[i] == '/' && line[i + 1] == '/') {
        cleansl(line, i);
      } else { /*inline comment test */
        inside = cleanml(line, i);
      }
    }
    printf("%s", line); /*
   multiline test */
  }

  return 0;
}

int getindex(char line[]) {
  for (int i = 0; i < MAXLEN - 1; ++i) {
    if (line[i] == '/' && (line[i + 1] == '/' || line[i + 1] == '*')) {
      return i;
    }
  }
  return -1;
}

void cleansl(char line[], int start) {
  int i = start;
  while (line[i] != '\n' && line[i] != '\0') {
    line[i++] = '\b';
  }
}

int cleanml(char line[], int start) {
  for (int i = start; i < MAXLEN - 1; ++i) {
    if (line[i] == '*' && line[i + 1] == '/') {
      line[i] = line[i + 1] = '\b';
      return 0;
    }

    if (line[i] == '\n') {
      break;
    }
    line[i] = '\b';
  }
  return 1;
}
