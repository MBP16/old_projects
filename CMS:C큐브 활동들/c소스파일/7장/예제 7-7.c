#include <stdio.h>

int function(int n);

int main(void)
{
	printf("��ȯ ��: %d \n", function(5.67));

	return 0;
}

int function(int n)
{
	printf("�Էµ� ����: %d \n", n);

	return 3.15;
}
