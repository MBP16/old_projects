#include <stdio.h>

int NumberRange(int val);

int main(void)
{
	int num;

	printf("���� �Է�: ");
	scanf("%d", &num);

	switch(NumberRange(num))
	{
	case -1:
		printf("�Էµ� ���ڴ� 0 �̸�. \n");
		break;

	case 0:
		printf("�Էµ� ���ڴ� 0�̻� 10�̸�. \n");
		break;

	case 1:
		printf("�Էµ� ���ڴ� 10�̻� 20�̸�. \n");
		break;

	default:
		printf("�Էµ� ���ڴ� 20�̻�. \n");
	}

	return 0;
}

int NumberRange(int val)
{
	if(val<0)
		return -1;
	else
		return val/10;
}