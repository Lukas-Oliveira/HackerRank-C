/**
 * Link: https://www.hackerrank.com/challenges/students-marks-sum/problem
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int marks_summation(int *marks, int number_of_students, char gender);

int main()
{
  int number_of_students;
  char gender;
  int sum, *marks;

  scanf("%d", &number_of_students);
  marks = (int *) malloc(number_of_students * sizeof(int));

  for (int student = 0; student < number_of_students; student++)
    scanf("%d", (marks + student));

  scanf(" %c", &gender);
  sum = marks_summation(marks, number_of_students, gender);
  printf("%d\n", sum);
  free(marks);
  
  return EXIT_SUCCESS;
}

int marks_summation(int *marks, int number_of_students, char gender)
{
  int sum = 0;
  int counter = (gender == 'b') ? 0 : 1;

  for (;counter < number_of_students; counter += 2)
    sum += *(marks + counter);
  
  return sum;
}
