#include <stdio.h>

int main(void)
{
	char name[20];
	printf("�̸�: ");
	gets(name);

	printf("%s \n", name);
	puts(name);

	return 0;
}