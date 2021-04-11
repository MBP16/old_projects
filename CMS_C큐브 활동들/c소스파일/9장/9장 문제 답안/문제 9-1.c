#include <stdio.h>

int main(void)
{
	double num;
	printf("실수 입력: ");
	scanf("%lf", &num);
	printf("제곱 연산의 결과: %f \n", num*num);
	return 0;
}