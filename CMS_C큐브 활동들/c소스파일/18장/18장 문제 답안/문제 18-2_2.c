#include <stdio.h>

int main(void)
{
	char str[100];
	int diff='A'-'a';
	int i=0;

	printf("���ڿ� �Է�: ");
	scanf("%s", str);

	while(str[i]!='\0')
	{
		if('a'<=str[i] && str[i]<='z')
			str[i]+=diff;

		i++;
	}

	printf("����� ���ڿ�: %s \n", str);

	return 0;
}