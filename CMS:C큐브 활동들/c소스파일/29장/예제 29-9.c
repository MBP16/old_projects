#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20]="Your name is ";
	char str2[20];

	printf("�̸��� �Է��ϼ���: ");
	gets(str2);

	strcat(str1, str2);
	puts(str1);

	return 0;
}