#include <stdio.h>

int main(void)
{
	int num=10;
	int * ptr;

	ptr=&num;
	printf("������ ptr�� ����Ű�� ���� ��: %d \n", *ptr);
	printf("num�� ����� ��: %d \n\n", num);

	*ptr=20;
	printf("������ ptr�� ����Ű�� ���� ��: %d \n", *ptr);
	printf("num�� ����� ��: %d \n\n", num);

	(*ptr)++;
	printf("������ ptr�� ����Ű�� ���� ��: %d \n", *ptr);
	printf("num�� ����� ��: %d \n\n", num);

	return 0;
}