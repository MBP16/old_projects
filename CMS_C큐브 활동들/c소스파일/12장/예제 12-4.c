#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch = '0';

	if(isdigit(ch))
		printf("숫자입니다. \n");
	else
		printf("숫자가 아닙니다. \n");
	

	return 0;
}