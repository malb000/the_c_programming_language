#include <stdio.h>

#define MAXLINE 1000

int main() {
  char line[MAXLINE];
  int c, len = 0;

  while (len < MAXLINE - 1) {
    c = getchar();

    if (c == EOF) {
      break;
    } else if (c == '\n') {
      break;
    }
    
    line[len++] = c;
  }

  line[len] = '\0';

  printf("Line (length %d): %s\n", len, line);

  return 0;
}
