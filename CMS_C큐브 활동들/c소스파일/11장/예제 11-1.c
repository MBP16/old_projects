#include <stdio.h>

int main(void)
{
	int num = 1;    // ù ��° num

	if(num == 1)
	{
		auto int num = 2;    // �� ��° num

		num++;
		printf("if�� �ȿ����� num: %d \n", num);
	}
	else
	{
		num++;
		printf("else�� �ȿ����� num: %d \n", num);
	}

	printf("if�� �ۿ����� num: %d \n", num);

	{
		int num = 100;    // �� ��° num

		num++;
		printf("�̸����� ���������� num: %d \n", num);
	}
	
	return 0;
}