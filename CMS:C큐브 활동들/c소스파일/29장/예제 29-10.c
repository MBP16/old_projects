#include <stdio.h>
#include <string.h>

void LexiCmp(char * str1, char * str2);
void LexiPartialCmp(char * str1, char * str2, int len);

int main(void)
{
	char str1[]="It is possible to master C"; 
	char str2[]="It is impossible to master C"; 
	char str3[]="It is possible to master C in a month or two"; 

	LexiCmp(str1, str2);
	LexiCmp(str1, str3);
	LexiPartialCmp(str1, str3, 26);

	return 0;
}

void LexiCmp(char * str1, char * str2)
{
	int ret=strcmp(str1, str2);

	if(ret==0)
		puts("�� ���ڿ��� �����մϴ�.");
	else if(ret<0)
		printf("�ռ��� ���ڿ�: %s \n", str1);
	else
		printf("�ռ��� ���ڿ�: %s \n", str2);
}

void LexiPartialCmp(char * str1, char * str2, int len)
{
	int ret=strncmp(str1, str2, len);

	if(ret==0)
		printf("%d��° ���ڱ��� �� ���ڿ��� �����մϴ�.\n", len);
	else if(ret<0)
		printf("�ռ��� ���ڿ�: %s \n", str1);
	else
		printf("�ռ��� ���ڿ�: %s \n", str2);
}
