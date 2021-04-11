#include <stdio.h>

int main(void)
{
	int num;

	printf("정수 입력: ");
	scanf("%d", &num);

	switch(num)
	{
	case 1:
		printf("A1 ");
		printf("A2 \n");
		break;

	case 2:
		printf("B1 ");
		printf("B2 \n");
		break;

	default:
		printf("Default! \n");
	}

	return 0;
}