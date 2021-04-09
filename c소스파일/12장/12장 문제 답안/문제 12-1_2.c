#include <stdio.h>
char ConvToBig(char ch);

int main(void)
{
	char ch1='a';
	char ch2='b';

	ch1=ConvToBig(ch1);
	ch2=ConvToBig(ch2);

	printf("%c %c \n", ch1, ch2);
	return 0;
}

char ConvToBig(char ch)
{
	int diff='A'-'a';
	return (char)(ch+diff);
}