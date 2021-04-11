#include <stdio.h>

void func(int* ptr)
{
  if(*ptr % 2 ==1)
  {
    (*ptr)++;
  }
  return ;
}

int main(void) 
{
  int number;
  scanf("%d", &number);
  func(&number);
  printf("%d", number);
  return 0;
}