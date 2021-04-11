#include <stdio.h>

int main(void)
{
	int num;

	printf("출력 횟수 입력: ");
	scanf("%d", &num);

	//while(num--)
	//	printf("Hello world \n");

	if(num==0)
		return 0;

	do{
		printf("Hello world \n");
	}while(--num);

	return 0;
}
