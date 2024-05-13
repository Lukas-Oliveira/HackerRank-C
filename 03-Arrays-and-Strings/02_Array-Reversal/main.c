/**
 * Link: https://www.hackerrank.com/challenges/reverse-array-c/problem
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int array_size, *array;

  scanf("%d", &array_size);
  
  array = (int *) malloc(array_size * sizeof(int));
  for (int counter = 0; counter < array_size; counter++)
    scanf("%d", array + counter);
  
  for (int counter = 0; counter < (array_size / 2); counter++)
  {
    int temp = *(array + array_size - counter - 1);
    *(array + array_size - counter - 1) = *(array + counter);
    *(array + counter) = temp;
  } 

  for (int counter = 0; counter < array_size; counter++)
    printf("%d ", *(array + counter));
  
  return EXIT_SUCCESS;
}