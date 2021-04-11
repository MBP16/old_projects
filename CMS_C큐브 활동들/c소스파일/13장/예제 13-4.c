#include <stdio.h>

int Increment(register int n)
{
	return n+1;
}

int main(void)
{
	register int num=10;

	num=Increment(num);
	printf("%d \n", num);

	num=Increment(num);
	printf("%d \n", num);

	num=Increment(num);
	printf("%d \n", num);
	
	return 0;
}