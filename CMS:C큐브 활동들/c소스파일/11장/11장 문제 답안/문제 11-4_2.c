#include <stdio.h>

int main(void)
{
	int num1, num2;
	int start, end, i;
	int sum=0;

	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);

	if(num1>num2)
	{
		start=num2;
		end=num1;
	}
	else
	{
		start=num1;
		end=num2;
	}

	for(i=start; i<=end; i++)
		sum+=i;

	printf("%d ~ %d 사이 정수의 합: %d \n", start, end, sum);

	return 0;
}
