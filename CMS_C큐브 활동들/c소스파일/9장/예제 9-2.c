#include <stdio.h>

int main(void)
{
	char n1 = 127;
	short n2 = 32767;
	long long n3 = 9223372036854775807;

	printf("char�� ���� �ִ� ��: %d \n", n1);
	printf("short�� ���� �ִ� ��: %d \n", n2);
	printf("long long�� ���� �ִ� ��: %d \n", n3);

	return 0;
}