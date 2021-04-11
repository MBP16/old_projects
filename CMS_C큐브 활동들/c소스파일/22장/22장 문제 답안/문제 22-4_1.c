#include <stdio.h>

int main(void)
{
	float num=3.15f;
	int * ptr=(int *)&num;

	printf("%d \n", *ptr);

	return 0;
}