#include <stdio.h>

int main(void)
{
	int num;
	printf("���� �Է�(1�̻� 30�̸�): ");
	scanf("%d", &num);

	switch(num)
	{
	case 2: case 3: case 5: case 7:
		printf("1�̻�, 10�̸��� �Ҽ��Դϴ�. \n");
		break;

	case 11: case 13: case 17: case 19:
		printf("10�̻�, 20�̸��� �Ҽ��Դϴ�. \n");
		break;

	case 23: case 29:
		printf("20�̻�, 30�̸��� �Ҽ��Դϴ�. \n");
		break;

	default:
		printf("�Ҽ��� �ƴմϴ�. \n");
		printf("�Ǵ� 0�����̰ų� 30�̻��� ���Դϴ�. \n");
	}

	return 0;
}