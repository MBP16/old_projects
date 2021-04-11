#include <stdio.h>

int main(void) {
  int i;
  int a;
  a = 0;
  for(i = 1; i <= 50; i++)
  {
    a = a + i;
  }
  printf("%d\n",a);
  return 0;
}