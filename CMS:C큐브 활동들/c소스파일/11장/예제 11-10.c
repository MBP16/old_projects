#include <stdio.h>

int main(void)
{
	int i;
	int dan;

	printf("�� ���� ����� ���ϴ°�? ");
	scanf("%d", &dan);

	for(i=1; i<10; i++)
		printf("%d x %d = %d \n", dan, i, dan*i);
	
	return 0;
}