#include "stdio.h"

int main(void) {
  int num;
  scanf("%d", &num);
  if(num == 4 || num == 5)
  {
    printf("A\n");
  }
  else if(num == 3)
  {
    printf("B\n");
  }
  else if(num == 2 || num == 1)
  {
    printf("C\n");
  }
  else
  {
    printf("F\n");
  }
  return 0;
}