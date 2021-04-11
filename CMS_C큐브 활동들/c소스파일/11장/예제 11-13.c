#include <stdio.h>

int main(void)
{
	int i, j;
	for(i=2; i<10; i++)
	{
		for(j=1; j<10; j++)
			printf("%d x %d = %d \n", i, j, i*j);

		printf("\n");    // 보기 좋은 출력을 위해
	}
	return 0;
}