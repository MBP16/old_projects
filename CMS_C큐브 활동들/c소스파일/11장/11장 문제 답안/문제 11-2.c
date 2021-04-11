#include <stdio.h>

int main(void)
{
	int num1, num2;

	while(1)
	{
		printf("두 개의 정수 입력(피제수 제수 순으로 입력): ");
		scanf("%d %d", &num1, &num2);

		if(num1==0 && num2==0)
			break;

		if(num2==0)
		{
			printf("제수가 0이므로 연산을 생략합니다. \n");
			continue;
		}

		printf("%d 나누기 %d의 결과: 몫 %d, 나머지 %d \n", 
			num1, num2, num1/num2, num1%num2);
	}

	return 0;
}