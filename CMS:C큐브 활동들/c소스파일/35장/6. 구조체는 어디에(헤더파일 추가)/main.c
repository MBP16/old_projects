#include <stdio.h>
#include "stdiv.h"

extern div IntDiv(int num1, int num2);

int main(void)
{
	div val=IntDiv(5, 2);
	printf("��: %d \n", val.quotient);
	printf("������: %d \n", val.remainder);
 
	return 0; 
}