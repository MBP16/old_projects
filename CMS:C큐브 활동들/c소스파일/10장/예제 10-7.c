#include <stdio.h>

int main(void)
{
	int num;
	printf("���� �Է�(1�̻� 30�̸�): ");
	scanf("%d", &num);

	if(num==2 || num==3 || num==5 || num==7)
		printf("1�̻�, 10�̸��� �Ҽ��Դϴ�. \n");
	else if(num==11 || num==13 || num==17 || num==19)
		printf("10�̻�, 20�̸��� �Ҽ��Դϴ�. \n");
	else if(num==23 || num==29)
		printf("20�̻�, 30�̸��� �Ҽ��Դϴ�. \n");
	else
	{
		printf("�Ҽ��� �ƴմϴ�. \n");
		printf("�Ǵ� 0�����̰ų� 30�̻��� ���Դϴ�. \n"); 
	}

	return 0;
}