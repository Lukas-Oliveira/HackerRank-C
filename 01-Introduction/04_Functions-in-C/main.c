/**
 * Link: https://www.hackerrank.com/challenges/functions-in-c/problem
*/

#include <stdio.h>
#include <stdlib.h>

int max_of_four(int a, int b, int c, int d);

int main()
{
  int a, b, c, d;
  int answer;

  scanf("%d %d %d %d", &a, &b, &c, &d);
  answer = max_of_four(a, b, c, d);
  printf("%d", answer);
  
  return EXIT_SUCCESS;
}

int max_of_four(int a, int b, int c, int d)
{
  int maximum = (a > b) ? a : b;

  maximum = (maximum < c) ? c : maximum;
  maximum = (maximum < d) ? d : maximum;

  return maximum;
}