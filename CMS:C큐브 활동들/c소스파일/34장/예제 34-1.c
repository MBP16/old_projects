#include <stdio.h>

int Factorial(int n)
{
	if(n==1)
		return 1;
	else
		return n*Factorial(n-1);
}

int main(void)
{
	int result;
	result=Factorial(3);
	printf(" 3! 계산 결과: %d \n", result);
	result=Factorial(10);
	printf("10! 계산 결과: %d \n", result);
	return 0;
}