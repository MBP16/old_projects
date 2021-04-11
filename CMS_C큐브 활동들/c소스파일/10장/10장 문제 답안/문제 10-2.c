#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);

	if(num1>num2)
		printf("두 수의 차에 대한 절대값은 %d \n", num1-num2);
	else
		printf("두 수의 차에 대한 절대값은 %d \n", num2-num1);

	return 0;
}