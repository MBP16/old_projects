#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RAND_LIMIT    99

int main(void)
{
	int i;
	srand( (unsigned)time( NULL ) );

	for(i=0; i<7; i++)
		printf("%d ", rand()%(RAND_LIMIT+1));

	return 0;
}