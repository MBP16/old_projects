#include <stdio.h>

int main(void)
{
	long long n1 = +2147483647;
	long long n2 = -2147483646;

	printf("���� ��: %lld \n", n1);
	n1 = n1+100;
	printf("���� ��: %lld \n\n", n1);

	printf("���� ��: %lld \n", n2);
	n2 = n2-100;
	printf("���� ��: %lld \n", n2);
		
	return 0;
}