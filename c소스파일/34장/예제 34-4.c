#include <stdio.h>

int Fibonacci(int num)
{
	if(num==0)
		return 0;
	else if(num==1)
		return 1;
	else
		return Fibonacci(num-2)+Fibonacci(num-1);
}

int main(void)
{
	int i;
	for(i=0; i<7; i++)
		printf("%4d", Fibonacci(i));

	return 0;
}