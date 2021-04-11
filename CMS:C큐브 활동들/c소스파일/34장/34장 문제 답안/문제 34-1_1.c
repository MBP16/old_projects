#include <stdio.h>
int PowerOfTwo(int n);

int main( void )
{
	int num;
	printf("정수 입력: ");
	scanf("%d", &num);

	printf("2의 %d승: %d \n", num, PowerOfTwo(num));
	return 0;
}

int PowerOfTwo(int n)
{
	if(n==0)
		return 1;

	return 2*PowerOfTwo(n-1);
}
