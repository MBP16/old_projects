#include <stdio.h>

int main(void)
{
	int num;
	int sum=0;

	//while(num)
	//{
	//	printf("���� �Է�: ");
	//	scanf("%d", &num);
	//	sum+=num;
	//}

	do{
		printf("���� �Է�: ");
		scanf("%d", &num);
		sum+=num;		
	}while(num);

	printf("�Էµ� ������ ��: %d \n", sum);

	return 0;
}
