#include <stdio.h>

int main(void)
{
	int num = 2;

	int Increment(int n);  /* Increment �Լ��� ���� */

	num = Increment(num);
	printf("num: %d \n", num);

	num = Increment(num);
	printf("num: %d \n", num);

	num = Increment(num);
	printf("num: %d \n", num);

	return 0;
}

int Increment(int n)
{
	n++;
	return n;
}
