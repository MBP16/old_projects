#include <stdio.h>
#include <stdlib.h>
#define RND_MIN    10
#define RND_MAX    100

int main(void)
{
	int i;
	unsigned seed;
	int rand3div;
	int diff=RND_MAX-RND_MIN;

	printf("���� �Է�: ");
	scanf("%u", &seed);
	srand(seed);
	printf("���� %u�� ����: ", seed);
	
	for(i=0; i<7; i++)
	{
		rand3div=(rand() / (double)RAND_MAX) * diff + RND_MIN;
		rand3div/=3;
		rand3div*=3;		
		printf("%d ", rand3div);
	}
	return 0;
}