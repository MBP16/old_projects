#include <stdio.h>

char* RetLongStr(char * st1, char * st2);

int main(void)
{
	char str1[]="C Programming";
	char str2[]="Java Program";
	char * longStr;

	longStr=RetLongStr(str1, str2);
	if(longStr==NULL)
		printf("�� ���ڿ��� ���̰� �����մϴ�. \n");
	else
		printf("�� ���ڿ�: %s \n", longStr);

	return 0;
}


char* RetLongStr(char * st1, char * st2)
{
	int i=0;

	while(1)
	{
		if(*(st1+i)=='\0' && *(st2+i)=='\0')
			return NULL;
		else if(*(st1+i)=='\0')
			return st2;
		else if(*(st2+i)=='\0')
			return st1;
		else
			i++;
	}

}