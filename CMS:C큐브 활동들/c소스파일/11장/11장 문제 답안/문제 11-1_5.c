#include <stdio.h>

int main(void)
{
	int cnt, num;
	int total=0;
	int itrCnt;

	printf("입력할 정수의 개수: ");
	scanf("%d", &cnt);
	
	itrCnt=cnt;

	while(itrCnt>0)
	{
		printf("정수입력: ");
		scanf("%d", &num);
		total+=num;
		itrCnt--;
	}

	printf("입력된 정수의 전체평균: %f \n", (double)total/cnt);

	return 0;
}
