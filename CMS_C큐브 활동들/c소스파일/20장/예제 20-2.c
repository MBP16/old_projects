#include <stdio.h>

void IncreArrElm(int arg[]);
void ArrPrintf(int arg[]);

int main(void)
{
	int arr[3]={1, 2, 3};
	printf("*** ���� ���� �迭���� ��� *** \n");
	ArrPrintf(arr);

	IncreArrElm(arr);

	printf("*** ���� ���� �迭���� ��� *** \n");
	ArrPrintf(arr);

	return 0;
}

void IncreArrElm(int arg[])
{
	int i;

	for(i=0; i<3; i++)
		arg[i]=arg[i]+1;
}

void ArrPrintf(int arg[])
{
	int i;

	for(i=0; i<3; i++)
		printf("%4d", arg[i]);

	printf("\n");
}