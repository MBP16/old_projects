#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[]="It is possible to master C in a month or two"; 
	char * chPtr;

	chPtr=strchr(str, 'i');
	printf("첫 번째 i 이후 문자열: %s \n", chPtr);
	
	chPtr=strrchr(str, 'i');
	printf("마지막 i 이후 문자열: %s \n", chPtr);
	
	return 0;
}

