#include <stdio.h>

int main(void)
{
	float num1;
	float num2;
	float num3;

	printf("실수 입력 1(E-표기법으로): ");
	scanf("%f", &num1);
	printf("입력된 실수 %g \n", num1);

	printf("실수 입력 2(E-표기법으로): ");
	scanf("%g", &num2);
	printf("입력된 실수 %g \n", num2);

	printf("실수 입력 3(E-표기법으로): ");
	scanf("%e", &num3);
	printf("입력된 실수 %g \n", num3);

	return 0;
}