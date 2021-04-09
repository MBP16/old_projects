#include <stdio.h>

int main(void)
{
	int num1 = 123;
	double num2 = 3.123;

	printf("%.5d \n", num1);
	printf("%.5f \n", num2);
	printf("%.5s \n", "Hello world!");

	return 0;
}