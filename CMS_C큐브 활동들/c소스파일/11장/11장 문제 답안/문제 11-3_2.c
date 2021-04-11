#include <stdio.h>

int main(void)
{
	int num;
	int sum=0;

	//while(num)
	//{
	//	printf("숫자 입력: ");
	//	scanf("%d", &num);
	//	sum+=num;
	//}

	do{
		printf("숫자 입력: ");
		scanf("%d", &num);
		sum+=num;		
	}while(num);

	printf("입력된 숫자의 합: %d \n", sum);

	return 0;
}
