#include <stdio.h>

int AddFunction(const int n1, const int n2);

int main(void)
{
	printf("1�� 2�� ��: %d \n", AddFunction(1, 2));
	printf("2�� 4�� ��: %d \n", AddFunction(2, 4));
	printf("3�� 6�� ��: %d \n", AddFunction(3, 6));

	return 0;
}

int AddFunction(const int n1, const int n2)
{
	//n1++;
	//n2++;
	return n1+n2;
}
