#include "stdio.h"

int main(void) {
int apple;
int tangerine;
int strawberry;
apple = 10;
strawberry = 20;
tangerine = 20;
printf("콩쥐 : 사과 3개랑 딸기 2개 주세요!\n");
apple = apple - 3;
strawberry = strawberry - 2;
printf("흥부: 음~ 지금 과일이 사과는");
printf("%d",apple);
printf("개,딸기가");
printf("%d",strawberry);
printf("개 남았군!\n");
printf("팥쥐:귤 10개 주세요!\n");
tangerine = tangerine - 10;
printf("흥부: 호호 지금 귤이");
printf("%d",tangerine);
printf("개 남았군!\n");
printf("햇님:딸기 10개랑 귤 5개 주세요!\n");
strawberry = strawberry - 10;
tangerine = tangerine - 5;
printf("흥부:아싸!! 딸기");
printf("%d",strawberry);
printf("개,귤");
printf("%d",tangerine);
printf("개가 나갔네!\n");
printf("달님:사과5개주세요\n");
apple = apple - 5;
printf("흥부:오늘은 운이 좋네!팔고남은 사과가");
printf("%d",apple);
printf("개와 귤이");
printf("%d",tangerine);
printf("개와 딸기가");
printf("%d",strawberry);
printf("개는 내일 다시 팔아야지!");
return 0;
}