# Chapter 2: Types, Operators, and Expressions

**Exercise 2-1, (p. 36):**

Write a program to determine the ranges of `char`, `short`, `int`, and `long` variables, both signed and unsigned, by printing appropriate values from standard headers and by direct computation. Harder if you compute them: determine the ranges of the various floating-point types.

[range\_of\_types.c](src/range_of_types.c)

```c
#include <limits.h>
#include <stdio.h>

int main() {
  printf("Ranges of data types using <limits.h>\n"
      "=========================================\n\n"
      
       "char: %d to %d\n"
       "signed char: %d to %d\n"
       "unsigned char: %d to %d\n\n"
       "signed short: %d to %d\n"
       "unsigned short: %d to %d\n\n"
       "signed int: %d to %d\n"
       "unsigned int: %u to %u\n\n"
       "signed long: %ld to %ld\n"
       "unsigned long: %lu to %lu\n\n"
       "signed long long: %lld to %lld\n"
       "unsigned long long: %llu to %llu\n\n",

       CHAR_MIN, CHAR_MAX,
       SCHAR_MIN, SCHAR_MAX,
       0, UCHAR_MAX,
       SHRT_MIN, SHRT_MAX,
       0, USHRT_MAX,
       INT_MIN, INT_MAX,
       0, UINT_MAX,
       LONG_MIN, LONG_MAX,
       0, ULONG_MAX,
       LLONG_MIN, LLONG_MAX,
       0, ULLONG_MAX);
  
}
```

**Output:**

```
Ranges of data types using <limits.h>
=========================================

char: -128 to 127
signed char: -128 to 127
unsigned char: 0 to 255

signed short: -32768 to 32767
unsigned short: 0 to 65535

signed int: -2147483648 to 2147483647
unsigned int: 0 to 4294967295

signed long: -9223372036854775808 to 9223372036854775807
unsigned long: 0 to 18446744073709551615

signed long long: -9223372036854775808 to 9223372036854775807
unsigned long long: 0 to 18446744073709551615
```

---