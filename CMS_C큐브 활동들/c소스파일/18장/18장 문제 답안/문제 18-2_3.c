#include <stdio.h>

int main(void)
{
	char str[100];
	int len=0, i;

	printf("문자열 입력: ");
	scanf("%s", str);

	while(str[len]!='\0')
		len++;

	printf("  역순 출력: ");
	for(i=len; i>0; i--)
		printf("%c", str[i-1]);

	return 0;
}