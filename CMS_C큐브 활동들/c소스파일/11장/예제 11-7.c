#include <stdio.h>

int main(void)
{
	int i=1;
	int dan;

	printf("�� ���� ����� ���ϴ°�? ");
	scanf("%d", &dan);

	do  
	{
		printf("%d x %d = %d \n", dan, i, dan*i);
		i++;
	}while(i<10);
	
	return 0;
}