#include <stdio.h>

int main(void)
{
	int num, i;
	int fact=1;


	printf("정수 입력: ");
	scanf("%d", &num);

	for(i=1; i<=num; i++)
	{
		fact*=i;
	}

	printf("%d factorial is %d \n", num, fact);

	return 0;
}
