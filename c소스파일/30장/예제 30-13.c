#include <stdio.h>
//#define  STNUM(Y, S, P)   YSP
//#define  STNUM(Y, S, P)   Y  S  P
#define  STNUM(Y, S, P)   ((Y)*100000+(S)*1000+(P))

int main(void)
{
	printf("�й�: %d \n", STNUM(10, 65, 175));	
	printf("�й�: %d \n", STNUM(10, 65, 075));

	return 0;
}