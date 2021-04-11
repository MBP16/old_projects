#include <stdio.h>

void CallByVal(int num)
{
	num++;
}

void CallByRef(int * ptr)
{
	(*ptr)++;
}

int main(void)
{
	int val=10;

	CallByVal(val);
	printf("CallByVal: %d \n", val);

	CallByRef(&val);
	printf("CallByRef: %d \n", val);

	return 0;
}