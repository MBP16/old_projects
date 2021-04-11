#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[]="AAA-BBB_CCC-DDD!EEE";
	char * tok;
	int cnt=0;
	
	tok=strtok(str, "-_!");

	while(tok!=NULL)
	{
		cnt++;
		printf("ÅäÅ« %d: %s \n", cnt, tok);
		tok=strtok(NULL, "-_!");
	}

	return 0;
}

