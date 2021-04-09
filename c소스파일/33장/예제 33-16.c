#include <stdio.h>

int main(void)
{
	fpos_t fpos;

	/* 颇老积己 */
	FILE * fp=fopen("text.txt", "wt");
	fputs("12345", fp);
	fclose(fp);

	/* 颇老俺规 */
	fp=fopen("text.txt", "rt");

	putchar(fgetc(fp));
	fgetpos(fp, &fpos);

	putchar(fgetc(fp));
	fsetpos(fp, &fpos);

	putchar(fgetc(fp));
	fclose(fp);
	return 0;
}