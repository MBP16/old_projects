#include <stdio.h>

int main(void)
{
	long long num1=123;
	long double num2=0.12345;
	int num3=7000;

	printf("문제1: |% -20lld| \n", num1);
	printf("문제2: |%020.5Lf| \n", num2);
	printf("문제3: |%-#20x| \n", num3);

	return 0;
}