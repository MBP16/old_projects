#include <stdio.h>

int Multi(int val1, int val2);

int n1=Multi(10, 20);

int main(void)
{
	int n2=Multi(10, 20);
	printf("%d %d \n", n1, n2);
	return 0;
}

int Multi(int val1, int val2)
{
	return val1*val2;
}
