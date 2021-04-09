#include <stdio.h>
#define  STNUM(Y, S, P)   Y ## S ## P

int main(void)
{
	printf("학번: %d \n", STNUM(10, 65, 175));	
	printf("학번: %d \n", STNUM(10, 65, 075));

	return 0;
}