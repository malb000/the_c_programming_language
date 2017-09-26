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
