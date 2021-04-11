#include <stdio.h>

void Swap3Val(int * ptr1, int * ptr2, int * ptr3);

int main(void)
{
	int n1=5, n2=6, n3=7;

	printf("n1:%d, n2:%d, n3:%d \n", n1, n2, n3);
	Swap3Val(&n1, &n2, &n3);

	printf("n1:%d, n2:%d, n3:%d \n", n1, n2, n3);
	return 0;
}

void Swap3Val(int * ptr1, int * ptr2, int * ptr3)
{
	int temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=*ptr3;
	*ptr3=temp;
}
