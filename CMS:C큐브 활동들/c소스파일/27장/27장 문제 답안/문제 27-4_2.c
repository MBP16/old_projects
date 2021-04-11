#include <stdio.h>
#include <stdlib.h>

int CmpString(char * str1, char * str2);
int Compare(const void * pKey, const void * pValue);

int main(void)
{
	char* strAry[4]={ "Boy", "Cookie", "Hardware", "Power"};
	char* srchStr="Cookie"; // 찾는 문자열;
	char** srchResult;

	/* 검색 과정 */
	srchResult= (char**)bsearch(
		(void*)srchStr, strAry, sizeof(strAry)/sizeof(char*), 
		sizeof(char*), Compare);

	if(srchResult==NULL)
		printf("찾는 대상이 존재하지 않습니다. \n");
	else
		printf("찾는 대상 %s이(가) 저장되어 있는 위치: %#x \n", 
		       *srchResult, srchResult);
	return 0;
}

int CmpString(char * str1, char * str2)
{
	while(*str1!='\0' || *str2!='\0')
 	{
		if(*str1 < *str2)
		{
			return 1;
		}
		else if(*str1 > *str2)
		{
			return -1;
		}
		else
		{
			str1++;
			str2++;
		}
	}

	return 0;  // 두 문자열이 일치하는 경우
}

int Compare(const void * pKey, const void * pValue)
{
	char * key= (char*)pKey;
	char * value= *((char**)pValue);

	return CmpString(key, value);
}