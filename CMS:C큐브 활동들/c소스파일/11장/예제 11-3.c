#include <stdio.h>

int main(void)
{
	int i=1;
	int dan;

	printf("�� ���� ����� ���ϴ°�? ");
	scanf("%d", &dan);

	while(i<10)  
	{
		printf("%d x %d = %d \n", dan, i, dan*i);
		i++;
	}
	
	return 0;
}