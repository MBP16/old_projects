#include "stdio.h"

int main(void) {
  int a = 6;
  printf("%d\n",a *= 2);
  printf("%d\n",--a);
  printf("%d\n",a -= 9);
  printf("%d\n",++a);
  printf("%d\n",a += 2);
  printf("%d\n",a %= 5);
  return 0;
}