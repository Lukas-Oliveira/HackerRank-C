#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define NUMBER_OF_DIGITS 5

int extract_nth_digit(int number, int position);
int sum_digits(int *digits);
int power(int base, int exponent);

int main()
{
  int number, sum;
  int digits[NUMBER_OF_DIGITS], index = 0;

  scanf("%d", &number);

  for (int counter = 1; counter <= NUMBER_OF_DIGITS; counter++)
    digits[index++] = extract_nth_digit(number, counter);
  
  sum = sum_digits(digits);
  printf("%d\n", sum);
  
  return EXIT_SUCCESS;
}

int extract_nth_digit(int number, int position)
{
  int rest_divider = power(10, position);
  int divider = power(10, position - 1);

  int rest = number % rest_divider;
  int digit = rest / divider;

  return digit;
}

int sum_digits(int *digits)
{
  int sum = 0;

  for (int counter = 0; counter < NUMBER_OF_DIGITS; counter++)
    sum += digits[counter];
  
  return sum;
}

int power(int base, int exponent)
{
  int result = 1;

  for (int counter = 0; counter < exponent; counter++)
    result *= base;

  return result;
}

#undef NUMBER_OF_DIGITS