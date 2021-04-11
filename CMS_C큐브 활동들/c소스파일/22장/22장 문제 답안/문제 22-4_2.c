#include <stdio.h>

int main(void)
{
	int n=1004008;
	int * p=&n;

	char * ptr=(char *)p;
	printf("%d \n", *ptr);

	return 0;
}