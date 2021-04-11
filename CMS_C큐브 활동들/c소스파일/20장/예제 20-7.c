#include <stdio.h>

int MaxValArr(const int arg[][3][3], const int depth);

int main(void)
{
	int arr1[2][3][3]={2, 5, 7, 9, 10}; 
	int arr2[4][3][3]={9, 4, 7, 5, 12};

	printf("arr1에 저장된 최대 크기의 정수: %d \n", MaxValArr(arr1, 2));
	printf("arr2에 저장된 최대 크기의 정수: %d \n", MaxValArr(arr2, 4));

	return 0;
}

int MaxValArr(const int arg[][3][3], const int depth)
{
	int i, j, k;
	int max=arg[0][0][0];
	
	for(i=0; i<depth; i++)
	{
		for(j=0; j<3; j++)
		{
			for(k=0; k<3; k++)
			{
				if(arg[i][j][k]>max)
					max=arg[i][j][k];
			}
		}
	}

	return max;
}
