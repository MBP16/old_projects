#include "stdio.h"

int main(void) {
  int num;
  scanf("%d", &num);
  switch(num)
  {
    case 1:
      printf("one");
      break;
    case 3:
      printf("three");
      break;
    case 5:
      printf("five");
      break;
    default:
      printf("Not in (1,3,5)");
      break;
  }
  return 0;
}