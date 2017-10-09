#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void itoa(int, char[]);
void reverse(char[]);

int main()
{
  char intStr[sizeof(int) * 8 + 1];

  int data[] = {INT_MIN, 0, INT_MAX, 127, -127, 1234, -1234};

  for (int i = 0; i < sizeof(data)/ sizeof(data[0]); i++) {
    itoa(data[i], intStr);

    printf("Converting int %d to string: %s\n", data[i], intStr);
  }
  return 0;
}

void itoa(int n, char s[])
{
  int i, sign;
  
  sign = n;

  i = 0;
  do {
    s[i++] = abs(n % 10) + '0';
  } while ((n /= 10));
  
  if (sign < 0) {
    s[i++] = '-';
  }

  s[i] = '\0';
  reverse(s);
}

void reverse(char s[])
{
  char tmp;

  for (int i = 0, j = strlen(s) - 1; i < j; i++, j--) {
    tmp = s[i];
    s[i] = s[j];
    s[j] = tmp;
  }
}
