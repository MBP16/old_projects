#include "stdio.h"

int main(void) 
{
  int p1;
  int p2;
  int ref;
  int d1;
  int d2;
  scanf("%d%d%d", &p1, &p2, &ref);
  d1 = ref - p1;
  d2 = ref - p2;
  if(d1 < 0)
  {
    d1 = -d1;
  }
  else if(d2 < 0)
  {
    d2 = -d2;
  }
  if(d1 > d2)
  {
    printf("2번이 이겼어\n");
  }
  else if(d1 == d2)
  {
    printf("비김!!\n");
  }
  else
  {
    printf("1번이 이겼어!!\n");
  }
  return 0;
}