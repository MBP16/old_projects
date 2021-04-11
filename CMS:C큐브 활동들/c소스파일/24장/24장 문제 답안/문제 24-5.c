#include <stdio.h>

int SumArr(int arr[][3]);
int * CmpArrSum(int ar1[][3], int ar2[][3]);

int main(void)
{
	int arr1[3][3]={{3, 2, 1}, {6, 7, 2}, {5, 1, 9}};
	int arr2[3][3]={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	
	int (*aptr)[3]=CmpArrSum(arr1, arr2);

	int i, j;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
			printf("%4d", aptr[i][j]);

		printf("\n");
	}

	return 0;
}

int * CmpArrSum(int ar1[][3], int ar2[][3])
{
	if(SumArr(ar1)>SumArr(ar2))
		return (int *)ar1;
	else
		return (int *)ar2;
}

int SumArr(int arr[][3])
{
	int total=0;
	int i, j;

	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
			total+=arr[i][j];
	}

	return total;
}
