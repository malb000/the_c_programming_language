# Chapter 4: Functions and Program Structure


**Exercise 4-1, (p. 71):**

Write the function `strrindex(s,t)`, which returns the position of the *rightmost* occurrence of `t` in `s` , or `-1` if there is none.

[strrindex.c](src/strrindex.c)

```c
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

```

---