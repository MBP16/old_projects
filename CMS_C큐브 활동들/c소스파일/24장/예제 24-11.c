#include <stdio.h>

int main(void)
{
	int i, j;

	/* ������ �迭�� ����*/
	int a=1, b=2, c=3;
	int * ptrArr[3]={&a, &b, &c};

	/* �迭 �������� ���� */
	int arr[2][3]={1, 2, 3, 4, 5, 6};
	int (*arrPtr)[3]=arr;

	/* ������ �迭�� Ȱ�� */
	for(i=0; i<3; i++)
		printf("%d ", *(ptrArr[i]));

	printf("\n\n");

	/* �迭 �������� Ȱ�� */
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
			printf("%d ", arrPtr[i][j]);

		printf("\n");
	}

	return 0;
}
