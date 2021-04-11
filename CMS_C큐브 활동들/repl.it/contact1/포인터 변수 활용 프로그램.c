#include <stdio.h>

void func1(int *num1, int *num2)
{
  *num1 = *num1 * *num1;
  *num2 = *num2 * *num2;
}

void func2(int *num1, int *num2)
{
  *num1 = *num1 * 10 + 3;
  *num2 = *num2 * 10 + 3;
}

void func3(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    return ;
}

int main(void) 
{
  int num1, num2;
  scanf("%d", &num1);
  scanf("%d", &num2);
  printf("%d, %d\n", num1, num2);
  func1(&num1, &num2);
  printf("**func1**\n %d, %d\n", num1, num2);
  func2(&num1, &num2);
  printf("**func2**\n %d, %d\n", num1, num2);
  func3(&num1, &num2);
  printf("**func3**\n %d, %d\n", num1, num2);
  return 0;
}