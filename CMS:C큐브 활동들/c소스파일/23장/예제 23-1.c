#include <stdio.h>

int main(void)
{
	int num1=3;
	double num2=3.15;

	int * ptr1=&num1;
	double * ptr2=&num2;

	printf("ptr1�� ���� ��: %#x \n", ptr1);
	printf("ptr1�� �ּ� ��: %#x \n\n", &ptr1);

	printf("ptr2�� ���� ��: %#x \n", ptr2);
	printf("ptr2�� �ּ� ��: %#x \n\n", &ptr2);

	return 0;
}