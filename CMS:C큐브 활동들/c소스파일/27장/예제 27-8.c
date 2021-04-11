#include <stdio.h>
#include <stdlib.h>

void FuncRegist(void);

int main(void)
{
	int sel;

	if(!atexit(FuncRegist))
		printf("함수 정상적 등록\n");

	printf("정상종료 1, 비정상종료 2: ");
	scanf("%d", &sel);

	if(sel==1)
		exit(EXIT_SUCCESS);
	else
		abort();
	
	return 0;
}

void FuncRegist(void)
{
	printf("프로그램이 정상적으로 종료되었습니다.\n");
}