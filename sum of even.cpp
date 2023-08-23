#include <stdio.h>
int main () {
  int array [100], i, n, sum = 0;
  printf ("Enter number of elements in array = ");
  scanf ("%d", &n);
  printf ("Enter %d numbers in array\n", n);
  for (i = 0; i < n; i++) {
    scanf ("%d", &array [i]);
    if (array [i] % 2 == 0) // check if element is even
      sum = sum + array [i]; // add it to sum
  }
  printf ("The sum of even numbers in array is %d", sum);
  return 0;
}

