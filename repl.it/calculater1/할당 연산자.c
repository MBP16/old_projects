#include "stdio.h"

int main(void) {
  int a = 10;
  int b = 10;
  int c = 10;
  int d = 10;
  int e = 10;
  a+=10;
  b-=4;
  c*=3;
  d/=2;
  e%=3;
  printf("%d\n",a);
  printf("%d\n",b);
  printf("%d\n",c);
  printf("%d\n",d);
  printf("%d\n",e);
  return 0;
}