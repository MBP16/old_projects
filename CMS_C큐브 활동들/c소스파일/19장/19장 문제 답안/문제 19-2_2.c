#include <stdio.h>

int main(void)
{
	char strArr[4][30];
	int i;

	for(i=0; i<4; i++)
	{
		printf("���ڿ� �Է�: ");
		scanf("%s", strArr[i]);
	}

	printf("�Է��� ���� ���\n");
	for(i=0; i<4; i++)
		printf("%s\n", strArr[3-i]);

	return 0;
}