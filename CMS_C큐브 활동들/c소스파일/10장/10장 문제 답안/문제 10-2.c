#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("�� ���� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);

	if(num1>num2)
		printf("�� ���� ���� ���� ���밪�� %d \n", num1-num2);
	else
		printf("�� ���� ���� ���� ���밪�� %d \n", num2-num1);

	return 0;
}