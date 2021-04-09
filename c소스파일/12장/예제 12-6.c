#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch = 'A';

	if(islower(ch))
		printf("소문자입니다. \n");

	if(isupper(ch))
		printf("대문자입니다. \n");

	return 0;
}