#include <stdio.h>

int main(void)
{
	int num1 = 123;
	int num2 = -123;
	double num3 = 3.15;

	printf("|%-10d| \n", num1);
	printf("|%010d| \n", num1);
	printf("|%+d|, |%+d| \n", num1, num2);
	printf("|% d|, |% d| \n", num1, num2);
	printf("%#7o, %#7x \n", num1, num1); 
	printf("%7g, %#7g \n", num3, num3);

	return 0;
}