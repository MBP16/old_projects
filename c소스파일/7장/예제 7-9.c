#include <stdio.h>

int main(void)
{
	int num;

	printf("12345\n");
	num = printf("67890\n");

	printf("�Լ��� ��ȯ �� 1: %d \n", num);
	printf("�Լ��� ��ȯ �� 2: %d \n", printf("Before or After\n"));

	return 0;
}