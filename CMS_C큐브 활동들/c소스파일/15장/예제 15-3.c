#include <stdio.h>

int main(void)
{
	int n1=15;         /*  00000000 00000000 00000000 00001111  */
	int n2=20;         /*  00000000 00000000 00000000 00010100  */

	int result=n1^n2;  /*  00000000 00000000 00000000 00011011  */

	printf("n1=%d \n", n1);
	printf("n2=%d \n", n2);
	printf("result=%d \n", result);

	return 0;
}