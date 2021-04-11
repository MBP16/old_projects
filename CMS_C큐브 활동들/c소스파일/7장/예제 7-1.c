#include <stdio.h>

int Increment(int n)
{
	n++;
	return n;
}

int main(void)
{
	int num = 2;

	num = Increment(num);
	printf("num: %d \n", num);

	num = Increment(num);
	printf("num: %d \n", num);

	num = Increment(num);
	printf("num: %d \n", num);

	return 0;
}