#include <stdio.h>

int main(void)
{
	int n1=10, n2=20, n3=30;
	int* arr[3]={&n1, &n2, &n3};
	int** dptr=&arr[0];

	printf("%d %d %d \n", **dptr, **(dptr+1), **(dptr+2));

	return 0;
}
