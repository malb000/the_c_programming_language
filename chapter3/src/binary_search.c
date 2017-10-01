#include <stdio.h>
#include <time.h>

#define TEST_DATA_SIZE 100000
#define TEST_ITERATIONS 10000000

int binsearch(int, int[], int);
int binsearch_orig(int, int[], int);

int main() {
  int data[TEST_DATA_SIZE];
  clock_t start, end;

  for (int i = 0; i < TEST_DATA_SIZE; i++) {
    data[i] = i;
  }

  start = clock();
  for (int i = 0; i < TEST_ITERATIONS; i++) {
    binsearch(TEST_DATA_SIZE + 1, data, TEST_DATA_SIZE);    
  }

  end = clock();
  printf ("Binary search (clock ticks): %d\n", end - start);
  
  start = clock();
  for (int i = 0; i < TEST_ITERATIONS; i++) {
    binsearch_orig(TEST_DATA_SIZE + 1, data, TEST_DATA_SIZE);    
  }

  end = clock();
  printf ("Original binary search (clock ticks): %d\n", end - start);

  return 0;
}

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

int binsearch_orig( int x, int v[], int n) {
  int low, high, mid;

  low = 0;
  high = n - 1;

  while (low <= high) {
    mid = (high - low) / 2 + low;

    if (x < v[mid]) {
      high = mid - 1;
    } else if (x > v[mid]) {
      low = mid + 1;
    } else {
      return mid;
    }
  }

  return -1;
}
