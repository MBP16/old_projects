#include <stdio.h>

int main(void)
{
	char str[10];
	int ch;
	int num;

	printf("���ڿ� Read: ");
	gets(str);

	printf("���� & ���� Read: ");
	ch=getchar();
	scanf("%d", &num);

	printf("���ڿ�: %s \n", str);
	printf("����: %c \n", ch);
	printf("����: %d \n", num);
	return 0;
}