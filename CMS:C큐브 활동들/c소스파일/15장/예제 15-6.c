#include <stdio.h>

int main(void)
{
	int n=16;            /*  00000000 00000000 00000000 00010000  */
	int r1=n>>1;         /*  00000000 00000000 00000000 00001000  */
	int r2=n>>2;         /*  00000000 00000000 00000000 00000100  */
	int r3=n>>3;         /*  00000000 00000000 00000000 00000010  */
	int r4=n>>4;         /*  00000000 00000000 00000000 00000001  */

	printf("result1=%d \n", r1);
	printf("result2=%d \n", r2);
	printf("result3=%d \n", r3);
	printf("result4=%d \n", r4);

	return 0;
}