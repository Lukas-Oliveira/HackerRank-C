/**
 * Link: https://www.hackerrank.com/challenges/sum-numbers-c/problem
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int integer1, integer2, integer_sum, integer_difference;
  float float1, float2, float_sum, float_difference;

  scanf("%d %d", &integer1, &integer2);
  scanf("%f %f", &float1, &float2);

  integer_sum = integer1 + integer2;
  integer_difference = integer1 - integer2;

  float_sum = float1 + float2;
  float_difference = float1 - float2;

  printf("%d %d\n", integer_sum, integer_difference);
  printf("%.1f %.1f\n", float_sum, float_difference);
  
  return EXIT_SUCCESS;
}