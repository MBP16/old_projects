#include <stdio.h>

int main(void)
{
	int num1=3;
	int num2=30;

	int* ptr=&num1;
	int** dptr=&ptr;

	printf("ptr�� ����Ű�� ���� ��: %d \n", num1);
	printf("ptr�� ����Ű�� ���� ��: %d \n", *ptr);
	printf("ptr�� ����Ű�� ���� ��: %d \n\n", **dptr);

	*dptr=&num2;  // ptr=&num2�� ����
	printf("ptr�� ����Ű�� ���� ��: %d \n", num2);
	printf("ptr�� ����Ű�� ���� ��: %d \n", *ptr);
	printf("ptr�� ����Ű�� ���� ��: %d \n\n", **dptr);

	**dptr+=3000;
	printf("ptr�� ����Ű�� ���� ��: %d \n", num2);
	printf("ptr�� ����Ű�� ���� ��: %d \n", *ptr);
	printf("ptr�� ����Ű�� ���� ��: %d \n\n", **dptr);

	return 0;
}