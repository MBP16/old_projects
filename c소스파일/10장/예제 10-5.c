#include <stdio.h>

int main(void)
{
	int num;

	printf("1���� 3 ������ ���� �Է�: ");
	scanf("%d", &num);

	switch(num)
	{
	case 1:
		printf("A1 ");
		printf("A2 ");
	case 2:
		printf("B1 ");
		printf("B2 ");
	case 3:
		printf("C1 ");
		printf("C2 ");
	default:
		printf("Default! \n");
	}

	return 0;
}