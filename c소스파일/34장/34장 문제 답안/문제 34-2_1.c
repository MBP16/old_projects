#include <stdio.h>
#include <stdlib.h>
#define RND_MIN    20
#define RND_MAX    70

int main(void)
{
	int i;
	unsigned seed;
	int rand2070;
	int diff=RND_MAX-RND_MIN;

	printf("¾¾µå ÀÔ·Â: ");
	scanf("%u", &seed);
	srand(seed);
	printf("¾¾µå %uÀÇ ¿­¸Å: ", seed);
	
	for(i=0; i<7; i++)
	{
		rand2070= (rand() / (double)RAND_MAX) * diff + RND_MIN;
		printf("%d ", rand2070);
	}

	return 0;
}