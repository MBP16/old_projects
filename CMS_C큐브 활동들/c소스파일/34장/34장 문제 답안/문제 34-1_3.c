#include <stdio.h>
int ToBinary(int decimal);
 
int main(int a)
{
	int decimal;
	printf("변환할 10진수 정수 입력: ");
	scanf("%d", &decimal);
	
	ToBinary(decimal);
	return 0;
} 

int ToBinary(int decimal)
{
	if(decimal>0)
	{
		int bin;
		bin=decimal%2;
		decimal/=2;
		ToBinary(decimal);
		printf("%d", bin);
	}
	return 0;
}
