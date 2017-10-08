#include <stdio.h>
#include <string.h>

#define MAX_STRING_LENGTH 256

void escape(char*, char*);
void unescape(char*, char*);

int main()
{
  char inStr[MAX_STRING_LENGTH], outStr[MAX_STRING_LENGTH * 2 - 1], 
       choice = ' ';

  int i;

  while (choice != 'q') {
    printf("1) Escape string\n");
    printf("2) Unescape string\n");
    printf("Make a selection (enter 'q' to quit): ");

    choice = getchar();

    for (i = 0; getchar() != '\n'; i++);
    
    if (i > 0 || (choice != '1' && choice != '2' && choice != 'q')) {
      choice = ' ';
      printf ("\n\n***Please make a valid selection***\n\n");
    } else if (choice != 'q') {
      printf("Enter string: ");
      fgets(inStr, MAX_STRING_LENGTH, stdin);

      switch (choice) {
        case '1':
          escape(inStr, outStr);
          printf("==Escaping String==\n");
          break;
        case '2':
          unescape(inStr, outStr);
          printf("==Unescaping String==\n");
      }

      printf("Input String: %s", inStr);
      printf("Output String: %s\n", outStr);
    } else {
      printf("\n\nGoodbye!\n");
    }
  }
}

void escape (char *s, char *t)
{
  strcpy(t, "");
  for (; *s != '\0'; s++)
  {
    switch (*s)
    {
      case '\a':
        strcat(t, "\\a");
        break;
      case '\b':
        strcat(t, "\\b");
        break;
      case '\f':
        strcat(t, "\\f");
        break;
      case '\n':
        strcat(t, "\\n");
        break;
      case '\r':
        strcat(t, "\\r");
        break;
      case '\t':
        strcat(t, "\\t");
        break;
      case '\v':
        strcat(t, "\\v");
        break;
      case '\\':
        strcat(t, "\\");
        break;
      case '\'':
        strcat(t, "\\\'");
        break;
      case '\"':
        strcat(t, "\\\"");
        break;
      case '\?':
        strcat(t, "\\\?");
        break;
      default:
        strncat(t, s, 1);
    }
  }
}


void unescape (char *s, char *t)
{
  strcpy(t, "");
  for (; *s != '\0'; s++)
  {
    if (*s == '\\' && *(++s) != '\0') {
      switch (*s)
      {
        case 'a':
          strcat(t, "\a");
          break;
        case 'b':
          strcat(t, "\b");
          break;
        case 'f':
          strcat(t, "\f");
          break;
        case 'n':
          strcat(t, "\n");
          break;
        case 'r':
          strcat(t, "\r");
          break;
        case 't':
          strcat(t, "\t");
          break;
        case 'v':
          strcat(t, "\v");
          break;
        case '\\':
          strcat(t, "\\");
          break;
        case '\'':
          strcat(t, "\'");
          break;
        case '"':
          strcat(t, "\"");
          break;
        case '?':
          strcat(t, "\?");
          break;
      }
    } else {
      strncat(t, s, 1);
    }
  }
}
