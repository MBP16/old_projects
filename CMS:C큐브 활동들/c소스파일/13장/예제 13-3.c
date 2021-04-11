#include <stdio.h>

void CountFctCall(void);

int main(void)
{
	CountFctCall();
	CountFctCall();
	CountFctCall();
	
	return 0;
}

void CountFctCall(void)
{
	static int cnt=1;
	printf("이 함수는 %d번째 호출되었습니다. \n", cnt);
	cnt++;
}