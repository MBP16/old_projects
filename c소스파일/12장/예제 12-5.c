#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch = 'a';

	if(isalpha(ch))
		printf("���ĺ��Դϴ�. \n");
	else
		printf("���ĺ��� �ƴմϴ�. \n");
	

	return 0;
}