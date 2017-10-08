# Chapter 3: Control Flow

**Exercise 3-1, (p. 58):**

Our binary search makes two tests inside the loop, when one would suffice (at the price of more tests outside). Write a version with only one test inside the loop and measure the difference in run-time.

[binary\_search.c](src/binary_search.c)

```c
int binsearch(int x, int v[], int n) {
  int low, high, mid;

  low = 0;
  high = n - 1;
  mid = high / 2;

  while (low <= high && x != v[mid]) {
    if (x < v[mid]) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
    mid = (high - low) / 2 + low;
  }

  return x == v[mid]
      ? mid : -1;
}
```

---

**Exercise 3-1, (p. 58):**

Write a function `escape(s,t)` that converts characters like newline and tab into visible escape sequences like `\n` and `\t` as it copies the string `t` to `s`. Use a `switch`. Write a function for the other direction as well, converting escape sequences into the real characters.

[escape.c](src/escape.c)

```c
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
```

---