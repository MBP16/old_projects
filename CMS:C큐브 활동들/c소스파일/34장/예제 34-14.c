#include <stdio.h>
int Sum(int n, ...);

int main(void)
{
	Sum(2, 1, 2);
	Sum(3, 1, 2, 3);
	Sum(4, 1, 2, 3, 4);
	return 0;
}

int Sum(int n, ...)
{
	printf("n=%d \n", n);
	return 0;
}