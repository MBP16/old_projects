#include "stdio.h"

int main(void) {
  char num;
  scanf("%c", &num);
  switch(num)
  {
  case 'a':
    printf("apple");
    break;
  case 'b':
    printf("banana");
    break;
  default:
    printf("error!");
    break;
  }
  return 0;
}