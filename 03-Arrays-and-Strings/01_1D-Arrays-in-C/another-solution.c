/**
 * Link: https://www.hackerrank.com/challenges/1d-arrays-in-c/problem
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int *array, array_size, sum = 0;

  scanf("%d", &array_size);

  *array = (int *) malloc(array_size * sizeof(int));
  for (int i = 0; i < array_size; i++)
  {
    scanf("%d", &array[i]);
    sum += array[i];
  }
  printf("%d\n", sum);
  
  free(array);

  return EXIT_SUCCESS;
}
