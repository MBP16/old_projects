#include <stdio.h>

int main(void)
{
	int ch;
	char str[20];

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

	return 0;
}