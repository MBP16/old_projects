#include <stdio.h>

int main(void)
{
	int i;
	int dan;

	printf("몇 단의 출력을 원하는가? ");
	scanf("%d", &dan);

	for(i=1; i<10; i++)
		printf("%d x %d = %d \n", dan, i, dan*i);
	
	return 0;
}