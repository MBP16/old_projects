#include <stdio.h>

int main(void)
{
	char str[10];
	int ch;
	int num;

	printf("문자열 Read: ");
	gets(str);

	printf("문자 & 숫자 Read: ");
	ch=getchar();
	scanf("%d", &num);

	printf("문자열: %s \n", str);
	printf("문자: %c \n", ch);
	printf("숫자: %d \n", num);
	return 0;
}