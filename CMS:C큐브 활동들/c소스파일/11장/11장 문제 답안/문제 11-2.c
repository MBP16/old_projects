#include <stdio.h>

int main(void)
{
	int num1, num2;

	while(1)
	{
		printf("�� ���� ���� �Է�(������ ���� ������ �Է�): ");
		scanf("%d %d", &num1, &num2);

		if(num1==0 && num2==0)
			break;

		if(num2==0)
		{
			printf("������ 0�̹Ƿ� ������ �����մϴ�. \n");
			continue;
		}

		printf("%d ������ %d�� ���: �� %d, ������ %d \n", 
			num1, num2, num1/num2, num1%num2);
	}

	return 0;
}