# Chapter 3: Control Flow

**Exercise 3-1, (p. 58):**

Our binary search makes two tests inside the loop, when one would suffice (at the price of more tests outside). Write a version with only one test inside the loop and measure the difference in run-time.

[getline.c](src/getline.c)

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