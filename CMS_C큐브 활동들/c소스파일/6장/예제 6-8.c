#include <stdio.h>

int main(void)
{
	int num1=10;
	int num2=12;

	int result1, result2;

	result1 = (num1 == num2);  // ���� ��
	result2 = (num1 <= num2);  // ��� ��
	
	printf("������? %d \n", result1);
	printf("���ų� ������? %d \n", result2);

	return 0;
}
