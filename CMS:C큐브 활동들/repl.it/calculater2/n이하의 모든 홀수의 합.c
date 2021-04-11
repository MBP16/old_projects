#include <stdio.h>

int main(void) {
  int n;
  int a;
  scanf("%d", &n);
  while(n >= 0)
  {
    if(n % 2 == 1)
    {
      a += n;
      n--;
    }
    n--;
  }
  printf("%d\n",a);
  return 0;
}