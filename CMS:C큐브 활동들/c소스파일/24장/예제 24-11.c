#include <stdio.h>

int main(void)
{
	int i, j;

	/* 포인터 배열의 선언*/
	int a=1, b=2, c=3;
	int * ptrArr[3]={&a, &b, &c};

	/* 배열 포인터의 선언 */
	int arr[2][3]={1, 2, 3, 4, 5, 6};
	int (*arrPtr)[3]=arr;

	/* 포인터 배열의 활용 */
	for(i=0; i<3; i++)
		printf("%d ", *(ptrArr[i]));

	printf("\n\n");

	/* 배열 포인터의 활용 */
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
			printf("%d ", arrPtr[i][j]);

		printf("\n");
	}

	return 0;
}
