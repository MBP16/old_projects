#include <stdio.h>

int main(void)
{
	int n1 = 7;
	int n2 = 3;

	int result = n1 + n2;
	printf("  ���� ���: %d \n", result);

	result = n1 - n2;
	printf("  ���� ���: %d \n", result);

	printf("  ���� ���: %d \n", n1 * n2);
	printf("������ ���: %d \n", n1 / n2);
	printf("������ ���: %d \n", n1 % n2);
	
	return 0;
}