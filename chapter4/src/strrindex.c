#include <stdio.h>
#include <string.h>

int strrindex(char[], char);

int main(void)
{
  char dataStr[] = "This is a test!";
  char dataChars[] = "aiz!";

  printf("Searching the following string:\n\n\t%s\n\n", dataStr);
  
  for (int i = 0; i < strlen(dataChars); i++) {
    printf("The last occurrence of the char '%c' is in position %d.\n", dataChars[i], strrindex(dataStr, dataChars[i]));
  }
}

int strrindex(char s[], char t)
{
  int i, idx = -1;

  for (i = 0; s[i] != '\0'; i++) {
    if (s[i] == t) {
      idx = i;
    }
  }

  return idx;
}
