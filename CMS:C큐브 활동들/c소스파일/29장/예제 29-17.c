#include <stdio.h>

int main(void)
{
	int num1;
	float num2;
	char str[20];

	sscanf("Hi! 24 3.15", "%s %d %g", str, &num1, &num2);
	printf("���ڿ� ���� ������: %s %d %g \n\n", str, num1, num2);

	printf("���ڿ� �Է�: ");
	scanf("%s %d %g", str, &num1, &num2);
	printf("Ű���� ���� ������: %s %d %g \n", str, num1, num2);

	return 0;
}