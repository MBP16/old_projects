#include <stdio.h>

int main(void)
{
	int i, j;

	i=0;
	while(i++ < 10)
	{
		j=0;
		while(j++ < 10)
		{
			printf("[i, j] = [%d, %d] \n", i, j);

			if(i%2==0 && j%2==0)  //i와 j가 각각 2일때 처음으로 참!
				break;
		}
	}

	printf("중첩된 반복문 완전 탈출! \n");

	return 0;
}