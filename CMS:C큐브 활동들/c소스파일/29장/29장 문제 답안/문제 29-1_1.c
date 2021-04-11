#include <stdio.h>

int main(void)
{
	int ch;
	int num;

	printf("데이터 입력: ");
	ch=getchar();
	scanf("%d", &num);

	printf("문자: %c \n", ch);
	printf("숫자: %d \n", num);
	return 0;
}