#include <stdio.h>

int main(void)
{
	int x1, y1;
	int x2, y2;

	printf("첫 번째 점의 좌표 입력: 두 개의 정수를 입력하세요: ");
	scanf("%d %d", &num1, &num2);

	printf("%d + %d = %d \n", num1, num2, num1+num2);
	printf("%d - %d = %d \n", num1, num2, num1-num2);
	printf("%d * %d = %d \n", num1, num2, num1*num2);
	printf("%d / %d = %d...%d \n", num1, num2, num1/num2, num1%num2);

	return 0;
}