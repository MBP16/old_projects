#include <stdio.h>

void IntArrPrintf(int * arr, int len)
{
	int i;
	for(i=0; i<len; i++)
		printf("%9d ", arr[i]);

	printf("\n");
}

void DblArrPrintf(double * arr, int len)
{
	int i;
	for(i=0; i<len; i++)
		printf("%9.4f ", arr[i]);

	printf("\n");
}

int main(void)
{
	int arr1[3]={1, 2, 3};
	double arr2[3]={1.1, 2.2, 3.3};
	
	IntArrPrintf(arr1, sizeof(arr1)/sizeof(int));
	DblArrPrintf(arr2, sizeof(arr2)/sizeof(double));

	return 0;
}
