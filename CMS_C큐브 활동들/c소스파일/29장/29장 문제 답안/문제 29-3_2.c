#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[]="It is possible to master C in a month or two.";
	char * firstI=strchr(str, 'i');
	char * lastI=strrchr(str, 'i');

	firstI++;
	*lastI='\0';
	printf("ó���� ������ i ������ ���ڿ�: %s \n", firstI);
	return 0;
}