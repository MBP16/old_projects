#include <stdio.h>

int Calculate(void);

int main(void)
{
	if(Calculate()==-1)
	{
		printf("������ �߸��Ͽ� ���α׷��� �����մϴ�. \n");
		return -1;
	}

	printf("���α׷��� �����մϴ�. \n");

	return 0;
}

int Calculate(void)
{
	int option;
	double n1, n2;

	printf("����(����1, ����2, ����3, ������4): ");
	scanf("%d", &option);

	if(option<1 || option>4)
		return -1;

	printf("�� ���� �Է�(����1, ����2): ");
	scanf("%lf, %lf", &n1, &n2);

	if(option==1)
	{
		printf("���� ���: %f \n", n1+n2);
		return 1;
	}

	if(option==2)
	{
		printf("���� ���: %f \n", n1-n2);
		return 1;
	}

	if(option==3)
	{
		printf("���� ���: %f \n", n1*n2);
		return 1;
	}

	if(option==4)
	{
		printf("������ ���: %f \n", n1/n2);
		return 1;
	}
	
	return 1;   // ������� �ʴ� return��!
}