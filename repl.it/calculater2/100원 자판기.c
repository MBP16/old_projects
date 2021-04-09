#include "stdio.h"

int main(void) {
  printf("바꾸실 금액을 입력하세요\n");
  int coin;
  scanf("%d", &coin);
  printf("당신이 바꾸실 100원은 %d개이고, 거스름돈은 원 입니다\n",coin/100, coin%100);
  printf("%d", coin/100);
  return 0;
}