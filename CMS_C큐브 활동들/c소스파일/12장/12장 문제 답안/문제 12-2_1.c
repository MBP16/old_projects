#include <stdio.h>
#include <ctype.h>

int isalnumA(int ch);
int isalnumB(int ch);


int main(void)
{
	if(isalnumA('A'))
		printf("���ĺ� �ƴϸ� ����! \n");
	else
		printf("���ĺ��� ���ڵ� �ƴϴ�! \n");

	if(isalnumB('#'))
		printf("���ĺ� �ƴϸ� ����! \n");
	else
		printf("���ĺ��� ���ڵ� �ƴϴ�! \n");

	return 0;
}

int isalnumA(int ch)
{
	if(isdigit(ch) || isalpha(ch))
		return 1;
	else
		return 0;
}

int isalnumB(int ch)
{
	if('a'<=ch && ch<='z')
		return 1;
	else if('A'<=ch && ch<='Z')
		return 2;
	else if('0'<=ch && ch<='9')
		return 3;
	else
		return 0;
}