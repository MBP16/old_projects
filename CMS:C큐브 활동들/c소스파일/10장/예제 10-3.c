#include <stdio.h>

int main(void)
{
	int num;

	printf("���� �Է�: ");
	scanf("%d", &num);

	if(!(num%2))
		printf("�Էµ� ���� ¦���Դϴ�. \n");
	else
		printf("�Էµ� ���� Ȧ���Դϴ�. \n");


	if(num<0)
	{
		printf("�׸��� �����Դϴ�. \n");
	}
	else
	{
		if(num==0)
			printf("�ٸ��ƴ� 0�Դϴ�. \n");
		else
			printf("�׸��� ����Դϴ�. \n");
	}

	return 0;
}