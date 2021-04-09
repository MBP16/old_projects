#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	unsigned seed;

	printf("씨드 입력: ");
	scanf("%u", &seed);
	srand(seed);

	printf("씨드 %u의 열매: ", seed);
	
	for(i=0; i<7; i++)
		printf("%d ", rand());

	return 0;
}