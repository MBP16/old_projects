#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[]="It is possible to master C in a month or two"; 
	char * chPtr;

	chPtr=strchr(str, 'i');
	printf("ù ��° i ���� ���ڿ�: %s \n", chPtr);
	
	chPtr=strrchr(str, 'i');
	printf("������ i ���� ���ڿ�: %s \n", chPtr);
	
	return 0;
}

