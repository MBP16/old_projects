#include <stdio.h>
#include "stdiv2.h"
#include "intdiv4.h"

int main(void)
{
	div val=IntDiv(5, 2);
	printf("��: %d \n", val.quotient);
	printf("������: %d \n", val.remainder);
 
	return 0; 
}