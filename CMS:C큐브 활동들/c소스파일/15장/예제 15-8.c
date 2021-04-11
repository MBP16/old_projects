#include <stdio.h>

int main(void)
{
	unsigned short data=0x5678;    /* 0101 0110 0111 1000 */

	unsigned short msk1=0xf000;    /* 1111 0000 0000 0000 */
	unsigned short msk2=0x0f00;    /* 0000 1111 0000 0000 */
	unsigned short msk3=0x00f0;    /* 0000 0000 1111 0000 */
	unsigned short msk4=0x000f;    /* 0000 0000 0000 1111 */

	printf("result1= %#.4x \n", data & msk1);
	printf("result2= %#.4x \n", data & msk2);
	printf("result3= %#.4x \n", data & msk3);
	printf("result4= %#.4x \n", data & msk4);

	return 0;
}