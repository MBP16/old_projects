#include <stdio.h>
#include <stdlib.h>

int CalStrLen(char * str);
int StrACDSort(const void * p1, const void * p2);

int main(void)
{
	char* strAry[4]={"Hardware", "Cookie", "Boy", "Power"};
	int i;

	qsort(
		(void*)strAry, sizeof(strAry)/sizeof(char*), sizeof(char*), 
		StrACDSort
	);

	for(i=0; i<4; i++)
		printf("%s \n", strAry[i]);

	return 0;
}

int CalStrLen(char * str)
{
	int len=0;

	while(*str != '\0')
	{
		str++;
		len++;
	}

	return len;
}

int StrACDSort(const void * p1, const void * p2)
{
	char * str1=*((char**)p1);
	char * str2=*((char**)p2);


	if(CalStrLen(str1)>CalStrLen(str2))
		return 1;
	else if (CalStrLen(str1)<CalStrLen(str2))
		return -1;
	else
		return 0;
}