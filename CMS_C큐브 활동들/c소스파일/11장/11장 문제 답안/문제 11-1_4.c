#include <stdio.h>

int main(void)
{
	int num;
	int i=9;

	printf("출력할 구구단 수 입력: ");
	scanf("%d", &num);

	while(i>0)
	{
		printf("%d x %d = %d \n", num, i, num*i);
		i--;
	}

	return 0;
}
