#include <stdio.h>

int main(void)
{
	int i, j;

	i=2;
	while(i<10)
	{
		j=1;
		while(j<10)
		{
			printf("%d x %d = %d \n", i, j, i*j);
			j++;
		}

		printf("\n");    // 보기 좋은 출력을 위해
		i++;
	}

	return 0;
}