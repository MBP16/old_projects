#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[]="It is possible to master C in a month or two.";
	char * firstI=strchr(str, 'i');
	char * lastI=strrchr(str, 'i');

	firstI++;
	*lastI='\0';
	printf("처음과 마지막 i 사이의 문자열: %s \n", firstI);
	return 0;
}