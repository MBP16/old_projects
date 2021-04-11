#include <stdio.h>

int * InvArr(int ar[], int len)
{
	int i;
	for(i=0; i<len; i++)
		ar[i]=-ar[i];

	return ar;
}

int main(void)
{
	int arr[3]={1, 2, 3};
	int * pArr;
	int i;

	pArr=InvArr(arr, sizeof(arr)/sizeof(int));
	for(i=0; i<3; i++)
		printf("%d \n", *(pArr+i));

	return 0;
}
