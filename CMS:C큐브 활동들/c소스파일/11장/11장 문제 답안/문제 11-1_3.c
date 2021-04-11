#include <stdio.h>

int main(void)
{
	int num=-1;    /* while문의 첫 조건검사가 참이 되어야 하므로... */
	int sum=0;

	while(num)
	{
		printf("숫자 입력: ");
		scanf("%d", &num);
		sum+=num;
	}

	printf("입력된 숫자의 합: %d \n", sum);

	return 0;
}
