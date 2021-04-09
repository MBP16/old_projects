#include <stdio.h>

int main(void) {
  int i;
  int a;
  int b;
  a = 0;
  b = 0;
  scanf("%d", &b);
  for(i = 1; i <= b; i++)
  {
    a = a + i;
  }
  printf("%d\n",a);
  return 0;
}