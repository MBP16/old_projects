#include "stdio.h"

int main(void) {
  int a = 7;
  int b = 9;
  int c = a + b;
  int d = a - b;
  int e = a * b;
  int f = a / b;
  int g = a % b;
  printf("%d+%d=%d\n",a,b,c);
  printf("%d-%d=%d\n",a,b,d);
  printf("%d*%d=%d\n",a,b,e);
  printf("%d/%d=%d\n",a,b,f);
  printf("%d%%%d=%d\n",a,b,g);
  return 0;
}