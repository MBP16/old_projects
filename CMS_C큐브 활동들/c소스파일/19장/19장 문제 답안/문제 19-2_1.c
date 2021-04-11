#include <stdio.h>

int main(void)
{
	char str1[30];
	char str2[30];
	char str3[30];
	char str4[30];

	printf("문자열 입력: ");
	scanf("%s", str1);
	printf("문자열 입력: ");
	scanf("%s", str2);
	printf("문자열 입력: ");
	scanf("%s", str3);
	printf("문자열 입력: ");
	scanf("%s", str4);

	printf("입력의 역순 출력\n");
	printf("%s\n", str4);
	printf("%s\n", str3);
	printf("%s\n", str2);
	printf("%s\n", str1);

	return 0;
}