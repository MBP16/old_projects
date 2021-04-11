#include <stdio.h>

int main(void)
{
	int i=0;

	while(i<7)  /* 총 7회의 출력을 반복 */
	{
		printf("%d 번째 Hello world! \n", i+1);
		i++;
	}
	
	return 0;
}