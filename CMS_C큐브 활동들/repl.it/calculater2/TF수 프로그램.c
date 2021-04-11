#include <stdio.h>

int main(void) {
  int i;
  int a;
  int b = 0;
  scanf("%d",&a);
  for(i = 1; i < a; i++)
  {
    if(i % 3 == 0 || i % 5 == 0)
    {
      b += i;
    }
  }
  printf("%d\n",b);
  return 0;
}