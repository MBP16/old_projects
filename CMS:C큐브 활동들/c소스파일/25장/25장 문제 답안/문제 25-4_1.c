#include <stdio.h>
#include <stdlib.h>

int * MakeIntArray(int len, int init)
{
	//int arr[len];
	int * arr=(int *)malloc(sizeof(int)*len);

	int i;
	for(i=0; i<len; i++)
		arr[i]=init;

	return arr;
}

int main(void)
{
	int * arr1=MakeIntArray(5, 0);
	int * arr2=MakeIntArray(7, 2);

	int i;
	for(i=0; i<5; i++)
		printf("%d ", arr1[i]);

	printf("\n");

	for(i=0; i<7; i++)
		printf("%d ", arr2[i]);

	free(arr1);
	free(arr2);

	return 0;
}