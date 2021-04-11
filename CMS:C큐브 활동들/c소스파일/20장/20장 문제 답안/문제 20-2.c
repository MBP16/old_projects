#include <stdio.h>
int MaxValue(const int arr[][3], const int vLen);

int main(void)
{
	int arr[2][3]={{2, 1, 4}, {8, 4, 7}};
	//int arr[3][3]={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

	printf("ÃÖ´ë °ª: %d \n", 
		MaxValue(arr, sizeof(arr)/(sizeof(int)*3)));

	return 0;
}

int MaxValue(const int arr[][3], const int vLen)
{
	int max=arr[0][0];
	int i, j;

	for(i=0; i<vLen; i++)
	{
		for(j=0; j<3; j++)
		{
			if(max<arr[i][j])
				max=arr[i][j];
		}
	}

	return max;
}