#include <stdio.h>

int main(void)
{
	int ch;
	char str[20];

	/* ������ �Է°� ��� */
	if((ch=getchar())==EOF)
	{
		printf("���� READ ���� \n");
		return -1;
	}
	else
	{
		if(putchar(ch)==EOF)
			printf("���� WRITE ���� \n");
		putchar('\n');
	}

	/* ���ڿ��� �Է°� ��� */
	if(gets(str)==NULL)
	{
		printf("���ڿ� READ ���� \n");
		return -1;
	}
	else
	{
		if(puts(str)==EOF)
			printf("���ڿ� WRITE ���� \n");
	}

	return 0;
}