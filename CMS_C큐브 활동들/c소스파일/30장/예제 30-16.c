#include <stdio.h>

int main(void)
{
	int dividend, divisor;
	
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d", &dividend, &divisor);

	if(divisor==0)
	{
		puts("������� �߻�");
		printf("Line: %d \n", __LINE__);
		printf("File: %s \n", __FILE__);
	}
	else
	{
		printf("������ ���: %d \n", dividend/divisor);
	}

	return 0;
}