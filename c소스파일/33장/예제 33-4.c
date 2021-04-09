#include <stdio.h>

int main(void)
{
	int ch;
	FILE * src=fopen("src.txt", "rt");
	FILE * des=fopen("dst.txt", "wt");
	
	if(src==NULL || des==NULL)
	{
		puts("���Ͽ��� ����!");
		return -1;
	}

	while((ch=getc(src))!=EOF)
		putc(ch, des);

	if(feof(src)!=0)
		puts("���Ϻ��� �Ϸ�!");
	else
		puts("���Ϻ��� ����!");

	fclose(src);
	fclose(des);

	return 0;
}