#include <stdio.h>

int main(void)
{
	int num1, num2;
	int abs;

	printf("�� ���� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);

	abs= (num1>num2) ? num1-num2 : num2-num1;
	printf("�� ���� ���� ���� ���밪�� %d \n", abs);

	return 0;
}