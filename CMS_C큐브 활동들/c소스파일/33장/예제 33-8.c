#include <stdio.h>

int main(void)
{
	char str1[100];
	char str2[100];

	printf("gets read: ");
	gets(str1);

	printf("fgets read: ");
	fgets(str2, 100, stdin);

	printf("%s %s", str1, str2);

	puts(str1);
	fputs(str1, stdout);
	return 0;
}