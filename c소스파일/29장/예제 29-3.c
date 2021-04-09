#include <stdio.h>
void ClearReadBuffer(void);

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

	/* fflush(stdin) ���� */
	ClearReadBuffer();

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

void ClearReadBuffer(void)
{
	while(getchar()!='\n');
}