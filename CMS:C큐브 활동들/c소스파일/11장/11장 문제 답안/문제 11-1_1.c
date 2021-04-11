#include <stdio.h>

int main(void)
{
	int num;

	printf("출력 횟수 입력: ");
	scanf("%d", &num);

	while(num--)
		printf("Hello world \n");

	return 0;
}
