#include <stdio.h>

int main(void)
{
	int option;

	double n1, n2;

	printf("����(����1, ����2, ����3, ������4): ");
	scanf("%d", &option);

	printf("�� ���� �Է�(����1, ����2): ");
	scanf("%lf, %lf", &n1, &n2);

	if(option==1)
		printf("���� ���: %f \n", n1+n2);

	else if(option==2)
		printf("���� ���: %f \n", n1-n2);

	else if(option==3)
		printf("���� ���: %f \n", n1*n2);

	else if(option==4)
		printf("������ ���: %f \n", n1/n2);
	
	else
		printf("������ ������ ����ϴ�. \n");

	printf("���α׷��� �����մϴ�. \n");

	return 0;
}