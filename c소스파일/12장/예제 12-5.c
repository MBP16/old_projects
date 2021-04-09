#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch = 'a';

	if(isalpha(ch))
		printf("알파벳입니다. \n");
	else
		printf("알파벳이 아닙니다. \n");
	

	return 0;
}