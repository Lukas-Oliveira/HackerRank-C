/**
 * Link: https://www.hackerrank.com/challenges/sorting-array-of-strings/problem
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int lexicographic_sort(const char * a, const char *b);
int lexicographic_sort_reverse(const char *a, const char *b);
int sort_by_number_of_distinct_characters(const char *a, const char *b);
int sort_by_length(const char *a, const char *b);
void string_sort(char **array, const int length, int (*cmp_func)(const char *a, const char *b));

int calc_distinct_characters(const char *sentence);
bool is_distinct_char(const char character, const char *distinct_characters);

int main()
{
  int n;
  char **array;

  scanf("%d", &n);
  array = (char **) malloc(n * sizeof(char *));

  for (int counter = 0; counter < n; counter++)
  {
    *(array + counter) = malloc(1024 * sizeof(char));
    scanf("%s", *(array + counter));
    *(array + counter) = realloc(*(array + counter), strlen(*(array + counter)) + 1);
  }
  
  string_sort(array, n, lexicographic_sort);
  for (int counter = 0; counter < n; counter++)
    printf("%s\n", array[counter]);
  printf("\n");

  string_sort(array, n, lexicographic_sort_reverse);
  for (int counter = 0; counter < n; counter++)
    printf("%s\n", array[counter]);
  printf("\n");

  string_sort(array, n, sort_by_length);
  for (int counter = 0; counter < n; counter++)
    printf("%s\n", array[counter]);
  printf("\n");

  string_sort(array, n, sort_by_number_of_distinct_characters);
  for (int counter = 0; counter < n; counter++)
    printf("%s\n", array[counter]);
  printf("\n");

  return EXIT_SUCCESS;
}

int lexicographic_sort(const char *a, const char *b)
{
  return strcmp(a, b);
}

int lexicographic_sort_reverse(const char *a, const char *b)
{
  return -strcmp(a, b);
}

int sort_by_number_of_distinct_characters(const char *a, const char *b)
{
  int distinct_characters_a = calc_distinct_characters(a);
  int distinct_characters_b = calc_distinct_characters(b);

  int distinct_sort_result = distinct_characters_a - distinct_characters_b;

  return (distinct_sort_result != 0) ? distinct_sort_result : lexicographic_sort(a, b);
}

int sort_by_length(const char *a, const char *b)
{
  int length_a = strlen(a);
  int length_b = strlen(b);

  int length_sort_result = length_a - length_b;
  
  return (length_sort_result != 0) ? length_sort_result : lexicographic_sort(a, b);
}

/* Insertion Sort */
void string_sort(char **array, const int length, int (*cmp_func)(const char *a, const char *b))
{
  char *key;
  int j;

  for (int i = 1; i < length; i++)
  {
    key = array[i];
    j = i - 1;

    while (j >= 0 && ((*cmp_func)(array[j], key) > 0))
    {
      array[j + 1] = array[j];
      j = j - 1;
    }

    array[j + 1] = key;
  }
}

int calc_distinct_characters(const char *sentence)
{
  char *distinct_characters;
  int number_of_distinct_characters = 0;
  const char *sentence_pointer;

  distinct_characters = (char *) malloc(1024 * sizeof(char));
  memset(distinct_characters, 0, 1023 * sizeof(char));
  distinct_characters[1023] = '\0';

  sentence_pointer = sentence;
  while (*sentence_pointer != '\0')
  {
    if (is_distinct_char(*sentence_pointer, distinct_characters))
    {
      distinct_characters[number_of_distinct_characters] = *sentence_pointer;
      number_of_distinct_characters++;
    }

    sentence_pointer++;
  }

  free(distinct_characters);

  return number_of_distinct_characters;
}

bool is_distinct_char(const char character, const char *distinct_characters)
{
  bool same_character = false;
  const char *character_pointer;

  character_pointer = distinct_characters;
  while (*character_pointer != '\0')
  {
    if (*character_pointer == character)
      return false;
    
    character_pointer++;
  }

  return true;
}
