#include <stdio.h>

int main(void)
{
	int num1;
	unsigned int num2;
	unsigned int num3;
	unsigned int num4;

	printf("10���� ���� �Է�: ");
	scanf("%d", &num1);
	printf("10������ %d \n\n", num1);

	printf("8���� ���� �Է�: ");
	scanf("%o", &num2);
	printf("10������ %u, 8������ %#o \n\n", num2, num2);

	printf("16���� ���� �Է�(�ҹ���): ");
	scanf("%x", &num3);
	printf("10������ %u, 16������ %#x \n\n", num3, num3);

	printf("16���� ���� �Է�(�빮��): ");
	scanf("%x", &num4);
	printf("10������ %u, 16������ %#X \n\n", num4, num4);

	return 0;
}