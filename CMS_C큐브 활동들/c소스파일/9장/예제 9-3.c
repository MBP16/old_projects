#include <stdio.h>

void PrintInt(int n);

int main(void)
{
	char n1 = 127;
	short n2 = 32767;
	long long n3 = 9223372036854775807;

	printf("char�� ���� �ִ� ��: ");
	PrintInt(n1);

	printf("short�� ���� �ִ� ��: ");
	PrintInt(n2);

	printf("long long�� ���� �ִ� ��: ");
	PrintInt(n3);

	return 0;
}


void PrintInt(int n)
{
	printf("%d \n", n);
}