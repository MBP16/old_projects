#include <stdio.h>

int main(void)
{
	int arr1[3][2];
	int arr2[3][3];
	int arr3[3][4];

	printf("%d %d \n", arr1, arr1+1);
	printf("%d %d \n", arr2, arr2+1);
	printf("%d %d \n", arr3, arr3+1);

	return 0;
}
