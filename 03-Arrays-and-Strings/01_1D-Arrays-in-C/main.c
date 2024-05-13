/**
 * Link: https://www.hackerrank.com/challenges/1d-arrays-in-c/problem
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define INPUT_LENGTH 1024

void fill_up_array(char *input_numbers, int *array);
int calculate_sum(int *array, int size);

int main()
{
  int *array, array_size, sum;
  char input_numbers[INPUT_LENGTH];

  scanf("%d ", &array_size);
  scanf("%[^\n]*s", input_numbers);

  array = (int *) malloc(array_size * sizeof(int));

  fill_up_array(input_numbers, array);
  sum = calculate_sum(array, array_size);
  printf("%d\n", sum);

  free(array);

  return EXIT_SUCCESS;
}

void fill_up_array(char *input_numbers, int *array)
{
  int index = 0;
  char *number_token;

  number_token = strtok(input_numbers, " ");
  while (number_token != NULL)
  {
    array[index++] = strtol(number_token, NULL, 10);
    number_token   = strtok(NULL, " ");
  }
}

int calculate_sum(int *array, int size)
{
  int sum = 0;

  for (int counter = 0; counter < size; counter++)
    sum += array[counter];
  
  return sum;
}

#undef INPUT_LENGTH