#include <stdio.h>

int IsCapital(char ch);

int main(void)
{
	char *str="He Is My Best Friend!";
	int capCnt=0;

	while(*str!='\0')
	{
		if(IsCapital(*str))
			capCnt++;

		str++;
	}

	printf("대문자 개수: %d \n", capCnt);
	return 0;
}

int IsCapital(char ch)
{
	if('A'<=ch && ch<='Z')
		return 1;
	else
		return 0;
}