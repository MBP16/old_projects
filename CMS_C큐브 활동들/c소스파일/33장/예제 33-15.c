#include <stdio.h>

int main(void)
{
	fpos_t filePos;
	printf("long형의 크기: %d \n", sizeof(long));
	printf("fpos_t의 크기: %d \n", sizeof(filePos));

	return 0;
}