#include <stdio.h>

void H3ArrPrintf(const int arg[][3], const int width);

int main(void)
{
	int arr1[2][3]={1, 2, 3};
	int arr2[3][3]={1, 3, 5, 7};
	int arr3[4][3]={{1}, {2}, {3}, {4, 5}};

	H3ArrPrintf(arr1, 2, 3);
	H3ArrPrintf(arr2, 3, 3);
	H3ArrPrintf(arr3, 4, 3);

	return 0;
}

void H3ArrPrintf(const int arg[][3], const int width, const int height)
{
	int i, j;

	for(i=0; i<width; i++)
	{
		for(j=0; j<height; j++)
		{
			printf("%4d", arg[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
