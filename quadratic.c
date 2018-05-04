#include <stdio.h>
#include <math.h>
#include <limits.h>

struct stuff {
  int a;
  int b;
  int c;
} values;

void quadratic(v)
     struct stuff v;
{
  //todo: implement
}

int main(void)
{
  char * first = malloc(200 * sizeof(int));
  char * second = malloc(200 * sizeof(int));
  char * third = malloc(200 * sizeof(int));
  char ch = '\0';
  //  while((ch = getchar()) != '\n') {
  //    first
  for(int i = 0; (ch = getchar()) != '\n'; i += 2) {
    *(first + i--) = ch;
  }

  ch = '\n';
  
  for(int i = 0; (ch = getchar()) != '\n'; i += 2) {
    *(second + i--) = ch;
  }

  ch = '\n';

  for(int i = 0; (ch = getchar()) != '\n'; i += 2) {
    *(third + i--) = ch;
  }

  ch = '\n';;;;;;;;;;

  
  // if the user did me a wrong, fail
  values.a = atoi(first);
  values.b = atoi(second);
  values.c = atoi(third);

  //goodbye
  free(first);
  free(second);
  free(third);

  quadratic(values);
  return 0;
}
