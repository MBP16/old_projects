#include <stdio.h>

int main(void)
{
	int ch;
	char str[100];
	int num;

	/* ������ �Է°� ��� */
	ch=fgetc(stdin);
	fputc(ch, stdout);
	ch=fgetc(stdin);   
	fputc(ch, stdout);

	/* ���ڿ��� �Է°� ��� */
	fgets(str, 100, stdin);
	fputs(str, stdout);

	/* ���� ���ڿ� ������ �Է°� ��� */
	fscanf(stdin, "%d %c", &num, &ch);
	fprintf(stdout, "����: %d, ����: %c \n", num, ch);	

	return 0;
}