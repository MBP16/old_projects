#include <stdio.h>
#include <stdlib.h>

int CmpString(char * str1, char * str2);
int Compare(const void * pKey, const void * pValue);

int main(void)
{
	char* strAry[4]={ "Boy", "Cookie", "Hardware", "Power"};
	char* srchStr="Cookie"; // ã�� ���ڿ�;
	char** srchResult;

	/* �˻� ���� */
	srchResult= (char**)bsearch(
		(void*)srchStr, strAry, sizeof(strAry)/sizeof(char*), 
		sizeof(char*), Compare);

	if(srchResult==NULL)
		printf("ã�� ����� �������� �ʽ��ϴ�. \n");
	else
		printf("ã�� ��� %s��(��) ����Ǿ� �ִ� ��ġ: %#x \n", 
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

	return 0;  // �� ���ڿ��� ��ġ�ϴ� ���
}

int Compare(const void * pKey, const void * pValue)
{
	char * key= (char*)pKey;
	char * value= *((char**)pValue);

	return CmpString(key, value);
}