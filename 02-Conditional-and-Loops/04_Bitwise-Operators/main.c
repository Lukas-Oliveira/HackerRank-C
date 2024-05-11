/**
 * Link: https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k);

int main()
{
  int n, k;

  scanf("%d %d", &n, &k);
  calculate_the_maximum(n, k);
  
  return EXIT_SUCCESS;
}

void calculate_the_maximum(int n, int k)
{
  int and = 0, or = 0, xor = 0;

  for (int x = 1; x <= k; x++)
    for (int y = x + 1; y <= n; y++)
    {
      int temp_and = x & y;
      int temp_or  = x | y;
      int temp_xor = x ^ y;

      if (temp_and > and && temp_and < k) and = temp_and;
      if (temp_or > or && temp_or < k)    or = temp_or;
      if (temp_xor > xor && temp_xor < k) xor = temp_xor;
    }

  printf("%d\n%d\n%d\n", and, or, xor);
}
