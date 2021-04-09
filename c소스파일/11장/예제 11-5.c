#include <stdio.h>

/* 한남대교의 길이는 약 915미터랍니다. */

int main(void)
{
	int cnt=0;
	int len=0;

	printf("맞출 때까지 계속되는 퀴즈! 퀴즈! 퀴즈! \n");
	printf("한남대교의 길이는 몇 미터일까요? \n");

	while(1)  
	{
		cnt++; 
		printf("정답? ");
		scanf("%d", &len);

		if(len==915)
			break;
		else if(len<915)
			printf("그보다는 길어요. \n");
		else
			printf("그보다 짧지요. \n");

	}

	printf("정답입니다. 총 %d회의 시도 끝에 맞추셨습니다. \n", cnt);
	
	return 0;
}