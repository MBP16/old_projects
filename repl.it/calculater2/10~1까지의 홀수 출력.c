#include <stdio.h>

int main(void) {
  int i = 10;
  while(i > 0)
  {
    i--;
    printf("%d\n", i);
    i--;
  }
  return 0;
}