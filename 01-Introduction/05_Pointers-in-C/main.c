#include <stdio.h>
#include <stdlib.h>

void update(int *a, int *b);
int sum(int a, int b);
int absolute_difference(int a, int b);

int main()
{
  int a, b;
  int *pointer_a = &a, *pointer_b= &b;

  scanf("%d %d", &a, &b);
  update(pointer_a, pointer_b);
  printf("%d\n%d", a, b);
  
  return EXIT_SUCCESS;
}

void update(int *a, int *b)
{
  int num1 = *a;
  int num2 = *b;

  *a = sum(num1, num2);
  *b = absolute_difference(num1, num2);
}

int sum(int a, int b)
{
  return a + b;
}

int absolute_difference(int a, int b)
{
  int result = a - b;
  return (result < 0) ? -result : result;
}
