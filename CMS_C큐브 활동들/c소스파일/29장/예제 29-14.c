#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[]="AAA-BBB_CCC-DDD!EEE";
	char * tok;
	
	tok=strtok(str, "-_!");
	printf("호출 이후 문자열: %s \n", str);

	return 0;
}

