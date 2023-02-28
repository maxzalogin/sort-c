#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

#include "sort.h"

void print(int* array, int len);

int main() {
  int *p = NULL, value = 0, count = 0;
  p = malloc(sizeof(int));
  scanf("%d", &value);
  do {
    count++;
    p = realloc(p, sizeof(int) * count);
    p[count - 1] = value;
    scanf("%d", &value);
  } 
  
  while (value != -1);

  double time_spent = 0.0;
  clock_t begin = clock();

  // buble(p, count);
  quick(p, 0, count - 1);

  clock_t end = clock();
  time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
  print(p, count);
  printf("\n\nTime: %f seconds", time_spent);

  free(p);

  return 0;
}

void print(int* array, int len) {
  for (int i = 0; i < len; i++) {
    printf("%d", array[i]);
    if (i != len - 1) printf(" ");
  }
}