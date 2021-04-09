#include <stdio.h>

int main(void)
{
	char ch;
	char num1;
	short num2;

	printf("문자 입력: ");
	scanf("%c", &ch);
	printf("숫자로 해석하면 %d, 문자로 해석하면 %c \n\n", ch, ch);

	printf("숫자 입력: ");
	scanf("%hhd", &num1);
	printf("숫자로 해석하면 %d, 문자로 해석하면 %c \n\n", num1, num1);

	printf("숫자 입력: ");
	scanf("%hd", &num2);
	printf("입력된 숫자: %d \n\n", num2);

	return 0;
}