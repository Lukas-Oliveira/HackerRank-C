/**
 * Link: https://www.hackerrank.com/challenges/playing-with-characters/problem
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_LENGTH 100

int main()
{
  char ch, s[MAX_LENGTH], sen[MAX_LENGTH];

  scanf("%[^\n]%*c", &ch);
  scanf("%[^\n]%*c", s);
  scanf("%[^\n]%*c", sen);

  printf("%c\n", ch);
  printf("%s\n", s);
  printf("%s\n", sen);
  
  return EXIT_SUCCESS;
}

#undef MAX_LENGTH