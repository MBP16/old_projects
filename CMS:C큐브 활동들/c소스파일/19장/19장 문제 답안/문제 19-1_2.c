#include <stdio.h>

int main(void)
{
	int arr[3][9];
	int i, j;

	for(i=2; i<=4; i++)
	{
		for(j=1; j<=9; j++)
			arr[i-2][j-1]=i*j;
	}

	for(i=0; i<9; i++)
		printf("%4d", arr[0][i]+arr[1][i]+arr[2][i]);

	printf("\n");
	return 0;
}