#include <stdio.h>

typedef int INT;
typedef INT * PINT;

void SwapRef(PINT p1, PINT p2)
{
	INT tmp=*p1;
	*p1=*p2;
	*p2=tmp;
}

int main(void)
{
	INT val1=5;
	INT val2=7;
	printf("Swap 이전 [val1:%d, val2:%d] \n", val1, val2);

	SwapRef(&val1, &val2);
	printf("Swap 이후 [val1:%d, val2:%d] \n", val1, val2);

	return 0;
}