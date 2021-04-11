#include <stdio.h>
#include <string.h>

char* AddStringTwo(char des[], char src[], int desLen);

int main(void)
{
	char str1[20]="Your name is ";
	char str2[20];

	printf("이름을 입력하세요: ");
	gets(str2);
	AddStringTwo(str1, str2, sizeof(str1)/sizeof(char));

	puts(str1);
	return 0;
}

char* AddStringTwo(char des[], char src[], int desLen)
{
	int dStrLen=strlen(des);
	int sStrLen=strlen(src);
	int maxAddLen=desLen-dStrLen;

	if(maxAddLen>sStrLen)  // 덧붙임 가능하다면
		return strcat(des, src);
	else
	{
		des[desLen-1]='\0';
		return strncat(des, src, maxAddLen-1);
	}
}