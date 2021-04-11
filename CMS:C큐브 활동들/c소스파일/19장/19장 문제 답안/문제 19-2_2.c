#include <stdio.h>

int main(void)
{
	char strArr[4][30];
	int i;

	for(i=0; i<4; i++)
	{
		printf("문자열 입력: ");
		scanf("%s", strArr[i]);
	}

	printf("입력의 역순 출력\n");
	for(i=0; i<4; i++)
		printf("%s\n", strArr[3-i]);

	return 0;
}