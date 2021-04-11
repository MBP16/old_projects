#include <stdio.h>

int main(void)
{
	int arr[5]={1, 2, 3, 4, 5};
	int * pArr=arr;
	int i;

	for(i=0; i<5; i++)
		printf("%d ", pArr[i]);
	
	printf("\n");

	for(i=0; i<5; i++)
		printf("%d ", *(pArr+i));

	printf("\n");

	return 0;
}