#include <stdio.h>

int main(void)
{
	int n1 = 7;
	int n2 = 3;

	int result = n1 + n2;
	printf("  µ¡¼À °á°ú: %d \n", result);

	result = n1 - n2;
	printf("  »¬¼À °á°ú: %d \n", result);

	printf("  °ö¼À °á°ú: %d \n", n1 * n2);
	printf("³ª´°¼À °á°ú: %d \n", n1 / n2);
	printf("³ª¸ÓÁö °á°ú: %d \n", n1 % n2);
	
	return 0;
}