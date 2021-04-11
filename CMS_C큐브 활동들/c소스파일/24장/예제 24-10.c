#include <stdio.h>

void InitArrWD3(int (*ar)[3], int height, int initNum)
{
	int i, j;
	for(i=0; i<height; i++)
		for(j=0; j<3; j++)
			ar[i][j]=initNum;
}

void InitArrWD4(int (*ar)[4], int height, int initNum)
{
	int i, j;
	for(i=0; i<height; i++)
		for(j=0; j<4; j++)
			ar[i][j]=initNum;
}

int main(void)
{
	int i, j;
	int arr1[3][3];
	int arr2[4][4];

	int (* pArr1)[3]=arr1;
	int (* pArr2)[4]=arr2;

	InitArrWD3(arr1, 3, 5);
	InitArrWD4(arr2, 4, 7);

	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
			printf("%4d", pArr1[i][j]);

		printf("\n");
	}

	printf("\n");

	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
			printf("%4d", pArr2[i][j]);

		printf("\n");
	}

	return 0;
}
