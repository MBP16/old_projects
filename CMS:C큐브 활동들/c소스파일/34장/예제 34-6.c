#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	printf("난수의 범위: 0이상 %d 이하 \n", RAND_MAX);

	for(i=0; i<7; i++)
		printf("%-10d", rand());

	return 0;
}