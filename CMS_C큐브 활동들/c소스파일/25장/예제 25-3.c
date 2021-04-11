#include <stdio.h>

void SwapRef(int * p1, int * p2)
{
	int tmp=*p1;
	*p1=*p2;
	*p2=tmp;
}

int main(void)
{
	int val1=5;
	int val2=7;
	printf("Swap 이전 [val1:%d, val2:%d] \n", val1, val2);

	SwapRef(&val1, &val2);
	printf("Swap 이후 [val1:%d, val2:%d] \n", val1, val2);

	return 0;
}