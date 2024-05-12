/**
 * Link: https://www.hackerrank.com/challenges/printing-pattern-2/problem
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void print_square(int number);
int maximum(int a, int b);

int main()
{
  int number;

  scanf("%d", &number);
  print_square(number);

  return EXIT_SUCCESS;
}

void print_square(int number)
{
  for (int x = -number + 1; x < number; x++)
  {
    for (int y = -number + 1; y < number; y++)
    {
      printf("%d ", maximum(abs(x), abs(y)) + 1);
    }
    printf("\n");
  }
}

int maximum(int a, int b)
{
  return (a > b) ? a : b;
}
