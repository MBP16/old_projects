#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int * arr;
	int i;
	
	arr=(int*)malloc(sizeof(int)*3);
	printf("arr ���� �ּ�: %#x \n", arr);
	for(i=0; i<3; i++)
		arr[i]=i;

	arr=(int*)realloc(arr, sizeof(int)*5); // �޸� Ȯ��
	printf("arr ���� �ּ�: %#x \n", arr);
	for(i=3; i<5; i++)
		arr[i]=i;

	/* �迭�� ����� �� ��� */
	for(i=0; i<5; i++)
		printf("%d ", arr[i]);

	free(arr);
	arr=NULL;

	return 0;
}