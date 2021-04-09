#include "stdio.h"

int main(void) {
  printf("%d\n",1 >=1);
  printf("%d\n",2 || 3);
  printf("%d\n",!0 && !0);
  printf("%d\n",1 || 1);
  printf("%d\n",'a' < 'a');
  printf("%d\n",1 && 1);
  printf("%d\n",'a' != 'b');
  printf("%d\n",6 > 4);
  printf("%d\n",0 <= 1 && 4 > 2);
  printf("%d\n",'A' == 'A');
  printf("%d\n",0 || 0);
  printf("%d\n",1.21 > 1.2);
  printf("%d\n",'A' == 'A' && 35 > 0);
  printf("%d\n",'+' != '-');
  printf("%d\n",!0 || !0);
  return 0;
}