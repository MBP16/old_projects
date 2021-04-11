#include <stdio.h>

int main(void)
{
	int i, j;
	for(i=0; i<3; i++)
	{
		printf("*** 바깥쪽 for문 %d차 회전 *** \n", i+1);

		for(j=0; j<3; j++)
			printf("안쪽의 for문 %d차 회전 \n", j+1);

		printf("\n");    // 보기 좋은 출력을 위해
	}
	return 0;
}