#include <stdio.h>
#include <stdlib.h>
#define RAND_LIMIT    99

int main(void)
{
	int i;
	unsigned seed;

	printf("���� �Է�: ");
	scanf("%u", &seed);
	srand(seed);

	printf("���� %u�� ����: ", seed);
	
	for(i=0; i<7; i++)
		printf("%d ", rand()%(RAND_LIMIT+1));

	return 0;
}