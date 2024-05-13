#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  char *sentence, *token;

  sentence = (char *) malloc(1024 * sizeof(char));
  scanf("%[^\n]", sentence);
  sentence = realloc(sentence, strlen(sentence) + 1);

  token = strtok(sentence, " ");
  while (token != NULL)
  {
    printf("%s\n", token);
    token = strtok(NULL, " ");
  }

  free(sentence);
  
  return EXIT_SUCCESS;
}