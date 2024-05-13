/**
 * Link: https://www.hackerrank.com/challenges/frequency-of-digits-1/problem
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct digit_counter
{
  int zero;
  int one;
  int two;
  int three;
  int four;
  int five;
  int six;
  int seven;
  int eight;
  int nine;
};

void print_digit_counter(struct digit_counter counter);
void update_digit_counter(char *sentence, struct digit_counter *counter);
void compare_character(const char *character, struct digit_counter *counter);

int main()
{
  struct digit_counter counter = {
    .zero  = 0,
    .one   = 0,
    .two   = 0,
    .three = 0,
    .four  = 0,
    .five  = 0,
    .six   = 0,
    .seven = 0,
    .eight = 0,
    .nine  = 0
  };

  char *sentence;

  sentence = (char *) malloc(1024 * sizeof(char));
  scanf("%[^\n]*s", sentence);

  update_digit_counter(sentence, &counter);
  print_digit_counter(counter);

  free(sentence);
  
  return EXIT_SUCCESS;
}

void print_digit_counter(struct digit_counter counter)
{
  printf("%d %d %d %d %d %d %d %d %d %d",
    counter.zero,
    counter.one,
    counter.two,
    counter.three,
    counter.four,
    counter.five,
    counter.six,
    counter.seven,
    counter.eight,
    counter.nine
  );
}

void update_digit_counter(char *sentence, struct digit_counter *counter)
{
  char *sentence_pointer = sentence;

  while (*sentence_pointer != '\0')
  {
    compare_character(sentence_pointer, counter);
    sentence_pointer++;
  }
}

void compare_character(const char *character, struct digit_counter *counter)
{
  switch (*character)
  {
    case '0': counter->zero++;  break;
    case '1': counter->one++;   break;
    case '2': counter->two++;   break;
    case '3': counter->three++; break;
    case '4': counter->four++;  break;
    case '5': counter->five++;  break;
    case '6': counter->six++;   break;
    case '7': counter->seven++; break;
    case '8': counter->eight++; break;
    case '9': counter->nine++;  break;
  }
}
