#include <stdio.h>
#include <stdlib.h>

void FirstFunc(void);
void SecondFunc(void);
void ThirdFunc(void);

int main(void)
{
	if(!atexit(FirstFunc))
		printf("첫 번째 함수 정상적 등록\n");

	if(!atexit(SecondFunc))
		printf("두 번째 함수 정상적 등록\n");

	if(!atexit(ThirdFunc))
		printf("세 번째 함수 정상적 등록\n\n");

	return 0;
}

void FirstFunc(void)
{
	printf("첫 번째 등록 함수.\n");
}

void SecondFunc(void)
{
	printf("두 번째 등록 함수.\n");
}

void ThirdFunc(void)
{
	printf("세 번째 등록 함수.\n");
}