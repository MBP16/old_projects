#include <stdio.h>

int main(void)
{
	long num1;
	long long num2;

	double num3;
	long double num4;

	printf("정수 입력(long): ");
	scanf("%ld", &num1);
	printf("입력된 숫자: %ld \n", num1);

	printf("정수 입력(long long): ");
	scanf("%lld", &num2);
	printf("입력된 숫자: %lld \n", num2);

	printf("실수 입력(double): ");
	scanf("%lf", &num3);
	printf("입력된 숫자: %f \n", num3);

	printf("실수 입력(long double): ");
	scanf("%Lf", &num4);
	printf("입력된 숫자: %Lf \n", num4);
	return 0;
}