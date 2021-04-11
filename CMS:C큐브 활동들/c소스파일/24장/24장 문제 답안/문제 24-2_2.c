#include <stdio.h>

int main(void)
{
	int a=10, b=20, c=30;
	int* iPtrArr[3]={&a, &b, &c};

	int** dptr=iPtrArr;
	printf("%d \n", **dptr);

	return 0;
}
