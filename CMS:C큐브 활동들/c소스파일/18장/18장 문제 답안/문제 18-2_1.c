#include <stdio.h>

int main(void)
{
	char str[100];
	int len=0;

	printf("���ڿ� �Է�: ");
	scanf("%s", str);

	while(str[len]!='\0')
		len++;

	printf("���ڿ��� ���̴� %d \n", len);

	return 0;
}