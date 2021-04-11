#include <stdio.h>
int ConvToInt(int ch);

int main(void)
{
	printf("%d \n", ConvToInt('1')+ConvToInt('8')); 
	
	return 0;
}

int ConvToInt(int ch)
{
	int diff=1-'1';
	
	return ch+diff;
}
