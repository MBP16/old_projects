#include <stdio.h>

int main(void)
{
	char str[100];
	int len=0, i;

	printf("���ڿ� �Է�: ");
	scanf("%s", str);

	while(str[len]!='\0')
		len++;

	printf("  ���� ���: ");
	for(i=len; i>0; i--)
		printf("%c", str[i-1]);

	return 0;
}