#include <stdio.h>

int main(void)
{
	int num1, num2;
	int abs;

	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);

	abs= (num1>num2) ? num1-num2 : num2-num1;
	printf("두 수의 차에 대한 절대값은 %d \n", abs);

	return 0;
}