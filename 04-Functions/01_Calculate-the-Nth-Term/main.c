/**
 * Link: https://www.hackerrank.com/challenges/recursion-in-c/problem
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int find_nth_term(int n, int a, int b, int c);

int main()
{
  int n, a, b, c;

  scanf("%d %d %d %d", &n, &a, &b, &c);
  int answer = find_nth_term(n, a, b, c);
  printf("%d", answer);
  
  return EXIT_SUCCESS;
}

int find_nth_term(int n, int a, int b, int c)
{
  if (n == 1)      return a;
  else if (n == 2) return b;
  else if (n == 3) return c;
  else
  {
    int next_term = a + b + c;
    return find_nth_term(n - 1, b, c, next_term);
  }
}