#include <stdio.h>

int main(void)
{
	int n=5;
	printf("������ n: %d \n", n);
	printf("-n: %d, +n: %d \n\n", -n, +n);

	n = -n;
	printf("����� n: %d \n", n);
	printf("-n: %d, +n: %d \n\n", -n, +n);
	
	return 0;
}