#include <stdio.h>

int main(void)
{
	int num1=3;
	char num2='A';
	double num3=3.15;

	int * ptr1=&num1;
	char * ptr2=&num2;
	double * ptr3=&num3;

	printf("num1�� ������ġ: %#x \n", ptr1);
	printf("num2�� ������ġ: %#x \n", ptr2);
	printf("num3�� ������ġ: %#x \n\n", ptr3);

	printf("������ ���� ptr1�� ũ��: %d \n", sizeof(ptr1));
	printf("������ ���� ptr2�� ũ��: %d \n", sizeof(ptr2));
	printf("������ ���� ptr3�� ũ��: %d \n\n", sizeof(ptr3));

	return 0;
}