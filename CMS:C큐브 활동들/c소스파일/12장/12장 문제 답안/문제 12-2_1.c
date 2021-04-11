#include <stdio.h>
#include <ctype.h>

int isalnumA(int ch);
int isalnumB(int ch);


int main(void)
{
	if(isalnumA('A'))
		printf("알파벳 아니면 숫자! \n");
	else
		printf("알파벳도 숫자도 아니다! \n");

	if(isalnumB('#'))
		printf("알파벳 아니면 숫자! \n");
	else
		printf("알파벳도 숫자도 아니다! \n");

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