#include <stdio.h>

int main(void)
{
	int i=1;
	int dan;

	printf("몇 단의 출력을 원하는가? ");
	scanf("%d", &dan);

	do  
	{
		printf("%d x %d = %d \n", dan, i, dan*i);
		i++;
	}while(i<10);
	
	return 0;
}