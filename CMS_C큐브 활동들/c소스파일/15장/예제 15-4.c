#include <stdio.h>

int main(void)
{
	int n1=-1;         /*  11111111 11111111 11111111 11111111  */
	int n2= 0;         /*  00000000 00000000 00000000 00000000  */

	int result1=~n1;   /*  00000000 00000000 00000000 00000000  */
	int result2=~n2;   /*  11111111 11111111 11111111 11111111  */

	printf("result1=%d \n", result1);
	printf("result2=%d \n", result2);

	return 0;
}