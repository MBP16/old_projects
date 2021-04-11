#include <stdio.h>

int main(void)
{
	int i, j;

	for(i=2; i<10; i+=2)
	{
		for(j=1; j<10; j++)
		{
			printf("%dx%d=%d \n", i, j, i*j);
			if(j>=i)
				break;
		}
		printf("\n");
	}

	return 0;
}
