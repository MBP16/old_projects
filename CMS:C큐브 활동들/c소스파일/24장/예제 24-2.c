#include <stdio.h>

int main(void)
{
	int arr[]={1, 2, 3, 4, 5};
	int * p=&arr[2];

	printf("�� ��ġ: %d \n\n", *p);

	printf("�� ĭ ��: %d \n", *(p+1));
	printf("�� ĭ ��: %d \n\n", *(p+2));

	printf("�� ĭ ��: %d \n", *(p-1));
	printf("�� ĭ ��: %d \n\n", *(p-2));

	return 0;
}