#include <stdio.h>

int main(void)
{
	char ch;

	while(1)
	{
		printf("문자 입력: ");
		ch=getchar();
		if(ch==EOF)
			break;

		fflush(stdin);
		printf("입력 문자: %c \n", ch);
	}

	printf("이용해 주셔서 감사 드립니다. \n");

	return 0;
}