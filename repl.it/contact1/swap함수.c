#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return ;
}

int main(void) 
{
  int a = 10;
  int b = 15;
  printf("a: %d, b: %d\n", a, b);
  swap(&a, &b);
  printf("a: %d, b: %d\n", a, b);
  return 0;
}