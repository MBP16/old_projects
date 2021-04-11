#include "stdio.h"

int main(void) {
  int n = 6;
  if(n == 1)
  {
    printf("%d\n", n * 2);
  }
  else if(n == 2)
  {
    printf("%d\n", --n);
  }
  else if(n == 3 || n == 5)
  {
    printf("%d\n", n);
  }
  else if(n == 4)
  {
    printf("%d\n", n++);
  }
  else
  {
    n = 0;
    printf("%d\n", n);
  }
  n++;
  if(n % 2 == 1)
  {
    printf("%d\n", n++);
  }
   else
  {
    printf("%d\n", --n);
  }
  if(n != 0)
  {
    printf("1\n");
  }
   else
  {
    printf("0\n");
  }
  n = n * 3;
  if(n % 7 == 0)
  {
    printf("%d\n", n % 7 + 1);
  }
   else
  {
    printf("%d\n", n / 7);
  }
  if(n % 2 == 0)
  {
    printf("1\n");
  }
   else
  {
    printf("0\n");
  }
  if(n % 3 == 0 && n % 2 ==0)
  {
    printf("0\n");
  }
   else
  {
    printf("0\n");
  }
  return 0;
}