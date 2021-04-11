#include <stdio.h>

int main(void)
{
	int * ptr=0;

	*ptr=100;
	printf("%d", *ptr);

	return 0;
}