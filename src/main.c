#include <stdio.h>
#include <stdlib.h>

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

  buble(p, count);
  print(p, count);
  free(p);

  return 0;
}

void print(int* array, int len) {
  for (int i = 0; i < len; i++) {
    printf("%d", array[i]);
    if (i != len - 1) printf(" ");
  }
}