#include <stdio.h>

int main(void)
{
	int age;

	do 
	{
		printf("����� ���̴�? ");
		scanf("%d", &age);
	} while(age<1);

	switch(age/10)
	{
	case 0:
		printf("���ҳ��̷α���! \n");
		break;
	case 1:
		printf("10�뱺��. �ܿ￡ ������ �ʰھ��. \n");
		break;
	case 2:
		printf("20�뱺��. ������ ���� ���Դϴ�. \n");
		break;
	case 3:
		printf("30�뱺��. ���� ���� ����������? \n");
		break;
	case 4:
		printf("40�뱺��. �ǰ� �����ϼž� �մϴ�. \n");
		break;
	case 5:
		printf("50�뱺��. �λ��� 50���� �ƴմϱ�? \n");
		break;
	default:
		printf("���~ C ��� �����Ͻ÷����? \n");

	}
	
	return 0;
}