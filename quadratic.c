#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <stdlib.h>

struct stuff {
  double a;
  double b;
  double c;
} values;

void
positive(a, b, c)
     double a;
     double b;
     double c;
{
  printf("%f\n", (double)(-b - sqrt((b * b) - (4.0 * a * c))) / (2 * a));
}

void
negative(a, b, c)
     double a;
     double b;
     double c;     
{
  printf("%f\n", (double)(-b + sqrt((b * b) - (4.0 * a * c))) / (2.0 * a));
}


void quadratic(v)
     struct stuff v;
{
  positive(v.a, v.b, v.c);
  negative(v.a, v.b, v.c);
}

int main(void)
{
  char * first = malloc(200 * sizeof(int));
  char * second = malloc(200 * sizeof(int));
  char * third = malloc(200 * sizeof(int));

  if(first == NULL || second == NULL || third == NULL) {
    fprintf(stderr, "malloc did not work\n");
    return 1; /* malloc failed*/
  } else {
    const char prompt[18] = { 'E', 'n', 't', 'e', 'r', ' ', 'a', ' ', 'v', 'a', 'l', 'u', 'e', ' ', 'f', 'o', 'r', '\0' };
    char ch = 0;
    printf("%s A: ", prompt);
    fflush(stdout);
    for(int i = 0; (ch = getchar()) != '\n'; i += 2) {
      *(first + i--) = ch;
    }

    ch = '\n';
    printf("%s B: ", prompt);
    fflush(stdout);
    for(int i = 0; (ch = getchar()) != '\n'; i += 2) {
      *(second + i--) = ch;
    }
    
    ch = '\n';
    printf("%s c: ", prompt);
    fflush(stdout);
    for(int i = 0; (ch = getchar()) != '\n'; i += 2) {
      *(third + i--) = ch;
    }
    
    ch = '\n';;;;;;;;;;
    
    
    // if the user did me a wrong, fail
    sscanf(first, "%lf", &values.a);
    sscanf(second, "%lf", &values.b);
    sscanf(third, "%lf", &values.c);
    
    //goodbye
    free(first);
    free(second);
    free(third);
    
    quadratic(values);
    return 0;
  }
}
