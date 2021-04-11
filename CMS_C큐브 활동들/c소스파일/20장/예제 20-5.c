#include <stdio.h>

void IncreArrElm(int arg[], const int len);
void ArrPrintf(const int arg[], const int len);

int main(void)
{
	int arr1[3]={1, 2, 3};
	int arr2[5]={1, 2, 3, 4, 5};

	printf("*** ���� ���� �迭���� ��� *** \n");
	ArrPrintf(arr1, sizeof(arr1)/sizeof(int));
	ArrPrintf(arr2, sizeof(arr2)/sizeof(int));

	IncreArrElm(arr1, sizeof(arr1)/sizeof(int));
	IncreArrElm(arr2, sizeof(arr2)/sizeof(int));

	printf("*** ���� ���� �迭���� ��� *** \n");
	ArrPrintf(arr1, sizeof(arr1)/sizeof(int));
	ArrPrintf(arr2, sizeof(arr2)/sizeof(int));

	return 0;
}

void IncreArrElm(int arg[], const int len)
{
	int i;

	for(i=0; i<len; i++)
		arg[i]=arg[i]+1;
}

void ArrPrintf(const int arg[], const int len)
{
	int i;

	for(i=0; i<len; i++)
		printf("%4d", arg[i]);

	printf("\n");
}