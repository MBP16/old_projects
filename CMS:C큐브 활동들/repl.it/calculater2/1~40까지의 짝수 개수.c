#include <stdio.h>

int main(void) {
  int i = 2;
  int a = 0;
  while(i <= 40)
  {
    a++;
    i+=2;
  }
  printf("%d\n", a);
  return 0;
}