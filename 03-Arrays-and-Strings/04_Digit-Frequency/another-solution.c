/**
 * Link: https://www.hackerrank.com/challenges/frequency-of-digits-1/problem
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define STRING_LENGTH 1024
#define DIGITS 10

int main()
{
  char sentence[STRING_LENGTH];
  char map[DIGITS];
  int sentence_length;

  scanf("%[^\n]*s", sentence);
  sentence_length = strlen(sentence);

  for (int counter = 0; counter < DIGITS; counter++)
    map[counter] = 0;
  
  for (int counter = 0; counter < sentence_length; counter++)
  {
    int difference_index = sentence[counter] - '0';
    if (difference_index >= 0 && difference_index <= 9)
      map[difference_index]++;
  }

  for (int counter = 0; counter < DIGITS; counter++)
    printf("%d ", map[counter]);
  
  return EXIT_SUCCESS;
}

#undef STRING_LENGTH
#undef DIGITS