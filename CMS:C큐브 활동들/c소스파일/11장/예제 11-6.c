#include <stdio.h>

int main(void)
{
	int cnt=0;
	int n=0;

	printf("# 2와 3의 배수가 아닌 100 이하의 자연수들 \n");

	while((n++) < 100)
	{
		if(!(n%2) || !(n%3))  /* if((n%2)==0 || (n%3)==0) 와 동일 */
			continue;
		
		printf("%d, ", n);
		cnt++;
	}

	printf("\n\n");
	printf("# 2와 3의 배수가 아닌 100 이하의 자연수의 개수: %d \n", cnt);
	
	return 0;
}