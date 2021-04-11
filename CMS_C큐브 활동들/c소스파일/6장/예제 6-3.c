#include <stdio.h>

int main(void)
{
	int n=5;
	printf("현재의 n: %d \n", n);
	printf("-n: %d, +n: %d \n\n", -n, +n);

	n = -n;
	printf("변경된 n: %d \n", n);
	printf("-n: %d, +n: %d \n\n", -n, +n);
	
	return 0;
}