#include <stdio.h>
#include <stdlib.h> // I forgor

int main() {
  int buffer = 10;
  char* problem = (char*)malloc(sizeof(*problem)+sizeof(buffer));
  printf("Write your problem to solve ==> ");
  scanf("%s", &problem);
  printf("Answer: fish :)");
  free(problem);
  problem = NULL;
  return 0;
}
