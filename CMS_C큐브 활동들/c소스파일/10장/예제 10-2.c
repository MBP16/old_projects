#include <stdio.h>

int main(void)
{
	int num;


	printf("���� �Է�: ");
	scanf("%d", &num);

	if(num<0)
	{
		printf("�Էµ� ���ڴ� 0 �̸�. \n");
		return 0;
	}

	if(num>=0 && num<10)
	{
		printf("�Էµ� ���ڴ� 0�̻� 10�̸�. \n");
		return 0;
	}

	if(num>=10 && num<20)
	{
		printf("�Էµ� ���ڴ� 10�̻� 20�̸�. \n");
		return 0;
	}

	if(num>=20)
	{
		printf("�Էµ� ���ڴ� 20�̻�. \n");
		return 0;
	}

	return 0; // ��ǻ� ������� �ʴ� return��
}