/**
 * Link: https://www.hackerrank.com/challenges/for-loop-in-c/problem
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char *number_representation(int number);

int main()
{
  int a, b;
  
  scanf("%d\n%d", &a, &b);
  for (int counter = a; counter <= b; counter++)
    printf("%s\n", number_representation(counter));
  
  return EXIT_SUCCESS;
}

char *number_representation(int number)
{
  switch(number)
  {
    case 1:
      return "one";
    case 2:
      return "two";
    case 3:
      return "three";
    case 4:
      return "four";
    case 5:
      return "five";
    case 6:
      return "six";
    case 7:
      return "seven";
    case 8:
      return "eight";
    case 9:
      return "nine";
    default:
      return (number % 2 == 0) ? "even" : "odd";
  }
}
