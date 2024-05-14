/**
 * Link: https://www.hackerrank.com/challenges/dynamic-array-in-c/problem
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *total_number_of_books;
  int **total_number_of_pages;

  int total_number_of_shelves;
  int total_number_of_queries;

  scanf("%d", &total_number_of_shelves);
  scanf("%d", &total_number_of_queries);

  total_number_of_books = (int *)  malloc(total_number_of_shelves * sizeof(int));
  total_number_of_pages = (int **) malloc(total_number_of_shelves * sizeof(int *));

  for (int counter = 0; counter < total_number_of_shelves; counter++)
  {
    total_number_of_books[counter] = 0;
    total_number_of_pages[counter] = (int *) malloc(sizeof(int));
  }

  while (total_number_of_queries--)
  {
    int type_of_query;
    scanf("%d", &type_of_query);

    if (type_of_query == 1)
    {
      int shelf_position, book_number_of_pages;
      scanf("%d %d", &shelf_position, &book_number_of_pages);

      total_number_of_books[shelf_position] += 1;

      total_number_of_pages[shelf_position] = (int *) realloc(total_number_of_pages[shelf_position], total_number_of_books[shelf_position] * sizeof(int));
      total_number_of_pages[shelf_position][total_number_of_books[shelf_position] - 1] = book_number_of_pages;
    }
    else if (type_of_query == 2)
    {
      int shelf_position, book_position;
      scanf("%d %d", &shelf_position, &book_position);
      printf("%d\n", *(*(total_number_of_pages + shelf_position) + book_position));
    }
    else
    {
      int shelf_position;
      scanf("%d", &shelf_position);
      printf("%d\n", *(total_number_of_books + shelf_position));
    }
  }

  if (total_number_of_books)
    free(total_number_of_books);
  
  for (int counter = 0; counter < total_number_of_shelves; counter++)
    if (*(total_number_of_pages + counter))
      free(*(total_number_of_pages + counter));

  if (total_number_of_pages)
    free(total_number_of_pages);
  
  return EXIT_SUCCESS;
}