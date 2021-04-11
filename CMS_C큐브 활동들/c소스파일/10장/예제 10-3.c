#include <stdio.h>

int main(void)
{
	int num;

	printf("정수 입력: ");
	scanf("%d", &num);

	if(!(num%2))
		printf("입력된 수는 짝수입니다. \n");
	else
		printf("입력된 수는 홀수입니다. \n");


	if(num<0)
	{
		printf("그리고 음수입니다. \n");
	}
	else
	{
		if(num==0)
			printf("다름아닌 0입니다. \n");
		else
			printf("그리고 양수입니다. \n");
	}

	return 0;
}