#include <stdio.h>

int main(void)
{
	char str1[30];
	char str2[30];
	char str3[30];
	char str4[30];

	printf("���ڿ� �Է�: ");
	scanf("%s", str1);
	printf("���ڿ� �Է�: ");
	scanf("%s", str2);
	printf("���ڿ� �Է�: ");
	scanf("%s", str3);
	printf("���ڿ� �Է�: ");
	scanf("%s", str4);

	printf("�Է��� ���� ���\n");
	printf("%s\n", str4);
	printf("%s\n", str3);
	printf("%s\n", str2);
	printf("%s\n", str1);

	return 0;
}