#include <stdio.h>

int main(void)
{
	int n=-16;           /*  11111111 11111111 11111111 11110000  */
	int r1=n>>1;         /*  ????  */
	int r2=n>>2;         /*  ????  */
	int r3=n>>3;         /*  ????  */
	int r4=n>>4;         /*  ????  */

	printf("result1= %d \n", r1);
	printf("result2= %d \n", r2);
	printf("result3= %d \n", r3);
	printf("result4= %d \n", r4);

	return 0;
}