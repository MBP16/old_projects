#include <stdio.h>

int main(void)
{
	fpos_t fpos;

	/* ���ϻ��� */
	FILE * fp=fopen("text.txt", "wt");
	fputs("12345", fp);
	fclose(fp);

	/* ���ϰ��� */
	fp=fopen("text.txt", "rt");

	putchar(fgetc(fp));
	fgetpos(fp, &fpos);

	putchar(fgetc(fp));
	fsetpos(fp, &fpos);

	putchar(fgetc(fp));
	fclose(fp);
	return 0;
}