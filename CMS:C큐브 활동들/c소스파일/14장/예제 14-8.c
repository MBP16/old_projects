#include <stdio.h>

int main(void)
{
	int num1;
	unsigned int num2;
	unsigned int num3;
	unsigned int num4;

	printf("10진수 정수 입력: ");
	scanf("%d", &num1);
	printf("10진수로 %d \n\n", num1);

	printf("8진수 정수 입력: ");
	scanf("%o", &num2);
	printf("10진수로 %u, 8진수로 %#o \n\n", num2, num2);

	printf("16진수 정수 입력(소문자): ");
	scanf("%x", &num3);
	printf("10진수로 %u, 16진수로 %#x \n\n", num3, num3);

	printf("16진수 정수 입력(대문자): ");
	scanf("%x", &num4);
	printf("10진수로 %u, 16진수로 %#X \n\n", num4, num4);

	return 0;
}